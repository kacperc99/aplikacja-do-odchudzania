#include "DodajPosilek.h"

//(*InternalHeaders(DodajPosilek)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DodajPosilek)
const long DodajPosilek::ID_STATICTEXT1 = wxNewId();
const long DodajPosilek::ID_TEXTCTRL1 = wxNewId();
const long DodajPosilek::ID_STATICTEXT2 = wxNewId();
const long DodajPosilek::ID_TEXTCTRL2 = wxNewId();
const long DodajPosilek::ID_STATICTEXT3 = wxNewId();
const long DodajPosilek::ID_TEXTCTRL3 = wxNewId();
const long DodajPosilek::ID_STATICTEXT4 = wxNewId();
const long DodajPosilek::ID_TEXTCTRL4 = wxNewId();
const long DodajPosilek::ID_STATICTEXT5 = wxNewId();
const long DodajPosilek::ID_TEXTCTRL5 = wxNewId();
const long DodajPosilek::ID_PANEL2 = wxNewId();
const long DodajPosilek::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DodajPosilek,wxDialog)
	//(*EventTable(DodajPosilek)
	//*)
END_EVENT_TABLE()

DodajPosilek::DodajPosilek(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(DodajPosilek)
	wxGridSizer* GridSizer1;
	wxGridSizer* GridSizer2;
	wxGridSizer* GridSizer3;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	GridSizer1 = new wxGridSizer(1, 1, 0, 0);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	GridSizer2 = new wxGridSizer(1, 1, 0, 0);
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	GridSizer3 = new wxGridSizer(6, 2, 0, 0);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Nazwa Posiłku"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	GridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(Panel2, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	GridSizer3->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Ilość Kalorii"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	GridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl2 = new wxTextCtrl(Panel2, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	GridSizer3->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Ilość Białek"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	GridSizer3->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl3 = new wxTextCtrl(Panel2, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	GridSizer3->Add(TextCtrl3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("Ilość Tłuszczy"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	GridSizer3->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl4 = new wxTextCtrl(Panel2, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	GridSizer3->Add(TextCtrl4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("Ilość Węglowodanów"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	GridSizer3->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl5 = new wxTextCtrl(Panel2, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	GridSizer3->Add(TextCtrl5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel2, wxID_CANCEL, _("Anuluj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_CANCEL"));
	GridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(Panel2, wxID_OK, _("Potwierdź"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_OK"));
	GridSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
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

DodajPosilek::~DodajPosilek()
{
	//(*Destroy(DodajPosilek)
	//*)
}

void DodajPosilek::pobierzposilek(posilek *nowy_posilek)
{
    wxString buff;

    buff = TextCtrl1->GetValue();
    nowy_posilek->nazwa = buff;

    buff = TextCtrl2->GetValue();
    nowy_posilek->kalorie=wxAtoi(buff);

    buff = TextCtrl3->GetValue();
    nowy_posilek->bialka=wxAtoi(buff);

    buff = TextCtrl4->GetValue();
    nowy_posilek->tluszcze=wxAtoi(buff);

    buff = TextCtrl5->GetValue();
    nowy_posilek->weglowodany=wxAtoi(buff);


}

