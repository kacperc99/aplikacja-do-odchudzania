#include "DodajWykonaneCwiczenie.h"
#include "baza_cwiczenia.h"
#include <wx/string.h>

//(*InternalHeaders(DodajWykonaneCwiczenie)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DodajWykonaneCwiczenie)
const long DodajWykonaneCwiczenie::ID_STATICTEXT1 = wxNewId();
const long DodajWykonaneCwiczenie::ID_CHOICE1 = wxNewId();
const long DodajWykonaneCwiczenie::ID_STATICTEXT2 = wxNewId();
const long DodajWykonaneCwiczenie::ID_SPINCTRLDOUBLE1 = wxNewId();
const long DodajWykonaneCwiczenie::ID_STATICTEXT3 = wxNewId();
const long DodajWykonaneCwiczenie::ID_STATICTEXT4 = wxNewId();
const long DodajWykonaneCwiczenie::ID_PANEL2 = wxNewId();
const long DodajWykonaneCwiczenie::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DodajWykonaneCwiczenie,wxDialog)
	//(*EventTable(DodajWykonaneCwiczenie)
	//*)
END_EVENT_TABLE()

DodajWykonaneCwiczenie::DodajWykonaneCwiczenie(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(DodajWykonaneCwiczenie)
	wxGridSizer* GridSizer1;
	wxGridSizer* GridSizer2;
	wxGridSizer* GridSizer3;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	GridSizer1 = new wxGridSizer(1, 1, 0, 0);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	GridSizer2 = new wxGridSizer(1, 1, 0, 0);
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	GridSizer3 = new wxGridSizer(4, 2, 0, 0);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Ćwiczenie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	GridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Choice1 = new wxChoice(Panel2, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	GridSizer3->Add(Choice1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Czas wykonywania"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	GridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrlDouble1 = new wxSpinCtrlDouble(Panel2, ID_SPINCTRLDOUBLE1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, 1, _T("ID_SPINCTRLDOUBLE1"));
	SpinCtrlDouble1->SetValue(_T("0"));
	GridSizer3->Add(SpinCtrlDouble1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Spalone Kalorie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	GridSizer3->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	GridSizer3->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(Panel2, wxID_OK, _("Potwierdź"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_OK"));
	GridSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel2, wxID_CANCEL, _("Anuluj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_CANCEL"));
	GridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel2->SetSizer(GridSizer3);
	GridSizer3->Fit(Panel2);
	GridSizer3->SetSizeHints(Panel2);
	GridSizer2->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(GridSizer2);
	GridSizer2->Fit(Panel1);
	GridSizer2->SetSizeHints(Panel1);
	GridSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(GridSizer1);
	GridSizer1->Fit(this);
	GridSizer1->SetSizeHints(this);
	//*)
}

DodajWykonaneCwiczenie::~DodajWykonaneCwiczenie()
{
	//(*Destroy(DodajWykonaneCwiczenie)
	//*)
}

void DodajWykonaneCwiczenie::generate_choices(baza_cwiczenia *nasza)
{
    wxString buff;
    list<cwiczenie>::iterator it;
    for(it=nasza->baza_cwiczen.begin();it!=nasza->baza_cwiczen.end();++it)
    {
        buff = it->nazwa;
        Choice1->Append(wxString::FromUTF8(buff));
    }

    return;
}

double DodajWykonaneCwiczenie::get_spalone_kalorie(baza_cwiczenia *nasza)
{

    cwiczenie wybrane = nasza->znajdz_cw(Choice1->GetSelection());
    return (wybrane.kalorie/5) * SpinCtrlDouble1->GetValue();

}
