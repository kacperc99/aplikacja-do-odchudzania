#include "DodajNoweCwiczenie.h"


//(*InternalHeaders(DodajNoweCwiczenie)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DodajNoweCwiczenie)
const long DodajNoweCwiczenie::ID_STATICTEXT1 = wxNewId();
const long DodajNoweCwiczenie::ID_TEXTCTRL1 = wxNewId();
const long DodajNoweCwiczenie::ID_STATICTEXT2 = wxNewId();
const long DodajNoweCwiczenie::ID_SPINCTRLDOUBLE1 = wxNewId();
const long DodajNoweCwiczenie::ID_PANEL2 = wxNewId();
const long DodajNoweCwiczenie::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DodajNoweCwiczenie,wxDialog)
	//(*EventTable(DodajNoweCwiczenie)
	//*)
END_EVENT_TABLE()

DodajNoweCwiczenie::DodajNoweCwiczenie(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(DodajNoweCwiczenie)
	wxGridSizer* GridSizer1;
	wxGridSizer* GridSizer2;
	wxGridSizer* GridSizer3;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	GridSizer1 = new wxGridSizer(1, 1, 0, 0);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	GridSizer2 = new wxGridSizer(1, 1, 0, 0);
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	GridSizer3 = new wxGridSizer(3, 2, 0, 0);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Nazwa Ćwiczenia"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	GridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(Panel2, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	GridSizer3->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Ilośc kalorii spalonych przez 5 minut"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	GridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrlDouble1 = new wxSpinCtrlDouble(Panel2, ID_SPINCTRLDOUBLE1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 1000, 0, 1, _T("ID_SPINCTRLDOUBLE1"));
	SpinCtrlDouble1->SetValue(_T("0"));
	GridSizer3->Add(SpinCtrlDouble1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
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

DodajNoweCwiczenie::~DodajNoweCwiczenie()
{
	//(*Destroy(DodajNoweCwiczenie)
	//*)
}

cwiczenie DodajNoweCwiczenie::getnewcw()
{
    cwiczenie nowe;
    wxString buff;

    buff = TextCtrl1->GetLineText(0);
    nowe.nazwa = buff;

    nowe.kalorie = SpinCtrlDouble1->GetValue() ;

    return nowe;
}

