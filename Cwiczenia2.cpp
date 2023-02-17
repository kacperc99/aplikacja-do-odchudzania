#include "Cwiczenia2.h"

//(*InternalHeaders(Cwiczenia2)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Cwiczenia2)
const long Cwiczenia2::ID_STATICTEXT1 = wxNewId();
const long Cwiczenia2::ID_STATICTEXT2 = wxNewId();
const long Cwiczenia2::ID_PANEL2 = wxNewId();
const long Cwiczenia2::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Cwiczenia2,wxDialog)
	//(*EventTable(Cwiczenia2)
	//*)
END_EVENT_TABLE()

Cwiczenia2::Cwiczenia2(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Cwiczenia2)
	wxGridSizer* GridSizer1;
	wxGridSizer* GridSizer3;
	wxGridSizer* GridSizer2;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	GridSizer1 = new wxGridSizer(1, 1, 0, 0);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	GridSizer2 = new wxGridSizer(1, 1, 0, 0);
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	GridSizer3 = new wxGridSizer(3, 2, 0, 0);
	Button1 = new wxButton(Panel2, wxID_OK, _("Dodaj Nowe Ćwiczenie"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_OK"));
	GridSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel2, wxID_ANY, _("Dodaj Wykonane Ćwiczenie"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_ANY"));
	GridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Spalone Kalorie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	GridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	GridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(Panel2, wxID_CANCEL, _("Zapisz i Zakończ"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_CANCEL"));
	GridSizer3->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
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

Cwiczenia2::~Cwiczenia2()
{
	//(*Destroy(Cwiczenia2)
	//*)
}

