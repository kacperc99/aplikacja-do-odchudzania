#include "Cwiczenia.h"
#include "DodajNoweCwiczenie.h"
#include "DodajWykonaneCwiczenie.h"
#include <sstream>


//(*InternalHeaders(Cwiczenia)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Cwiczenia)
const long Cwiczenia::ID_BUTTON1 = wxNewId();
const long Cwiczenia::ID_BUTTON2 = wxNewId();
const long Cwiczenia::ID_STATICTEXT1 = wxNewId();
const long Cwiczenia::ID_STATICTEXT2 = wxNewId();
const long Cwiczenia::ID_BUTTON3 = wxNewId();
const long Cwiczenia::ID_PANEL2 = wxNewId();
const long Cwiczenia::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Cwiczenia,wxFrame)
	//(*EventTable(Cwiczenia)
	//*)
END_EVENT_TABLE()

Cwiczenia::Cwiczenia(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
        usr_cwiczenia.init_baza_cwiczenia("cwiczenia");
        usr_cwiczenia.read_baza();

	//(*Initialize(Cwiczenia)
	wxGridSizer* GridSizer1;
	wxGridSizer* GridSizer2;
	wxGridSizer* GridSizer3;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	GridSizer1 = new wxGridSizer(1, 1, 0, 0);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	GridSizer2 = new wxGridSizer(1, 1, 0, 0);
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	GridSizer3 = new wxGridSizer(3, 2, 0, 0);
	Button1 = new wxButton(Panel2, ID_BUTTON1, _("Dodaj Nowe Ćwiczenie"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	GridSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel2, ID_BUTTON2, _("Dodaj Wykonane Ćwiczenie"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	GridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Spalone Kalorie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	GridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	GridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(Panel2, ID_BUTTON3, _("Zakończ"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	GridSizer3->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel2->SetSizer(GridSizer3);
	GridSizer3->Fit(Panel2);
	GridSizer3->SetSizeHints(Panel2);
	GridSizer2->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Panel1->SetSizer(GridSizer2);
	GridSizer2->Fit(Panel1);
	GridSizer2->SetSizeHints(Panel1);
	GridSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(GridSizer1);
	GridSizer1->Fit(this);
	GridSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Cwiczenia::CwiczeniaMenuNoweCwiczenie);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Cwiczenia::CwiczeniaMenuWykonaneCwiczenie);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Cwiczenia::CwiczeniaZakonczButton);
	//*)

	spalone =  0;
	RefreshCwiczenia(0);
}

Cwiczenia::~Cwiczenia()
{
	//(*Destroy(Cwiczenia)
	//*)
}


void Cwiczenia::CwiczeniaMenuNoweCwiczenie(wxCommandEvent& event)
{

    DodajNoweCwiczenie dialog(this);
    int dlg=dialog.ShowModal();
    if(dlg==wxID_OK)
    {
        cwiczenie buff;
        buff = dialog.getnewcw();
        usr_cwiczenia.create_cwicznie(buff);
    }
    if(dlg==wxID_CANCEL)
    {

    }

}

void Cwiczenia::CwiczeniaMenuWykonaneCwiczenie(wxCommandEvent& event)
{
    DodajWykonaneCwiczenie dialog(this);
    dialog.generate_choices(&usr_cwiczenia);
    int dlg=dialog.ShowModal();
    if(dlg==wxID_OK)
    {
        double buff = dialog.get_spalone_kalorie(&usr_cwiczenia);
        RefreshCwiczenia(buff);
    }
    if(dlg==wxID_CANCEL)
    {

    }
}

void Cwiczenia::CwiczeniaZakonczButton(wxCommandEvent& event)
{
    usr_cwiczenia.write_baza();
    this->Show(false);
}


void Cwiczenia::RefreshCwiczenia(double spal)
{
    spalone = spalone + spal;

    std::stringstream strs;

    strs.precision(2);

    strs << std::fixed <<spalone;

    std::string buff = strs.str();

    StaticText2->SetLabel(buff);

}

