#include "ZmienDzienFrame.h"

//(*InternalHeaders(ZmienDzienFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ZmienDzienFrame)
const long ZmienDzienFrame::ID_STATICTEXT1 = wxNewId();
const long ZmienDzienFrame::ID_BUTTON2 = wxNewId();
const long ZmienDzienFrame::ID_BUTTON3 = wxNewId();
const long ZmienDzienFrame::ID_DATEPICKERCTRL1 = wxNewId();
const long ZmienDzienFrame::ID_PANEL2 = wxNewId();
const long ZmienDzienFrame::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ZmienDzienFrame,wxFrame)
	//(*EventTable(ZmienDzienFrame)
	//*)
END_EVENT_TABLE()

ZmienDzienFrame::ZmienDzienFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ZmienDzienFrame)
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
	GridSizer3 = new wxGridSizer(2, 3, 0, 0);
	GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Zmień Dzień"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	GridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel2, ID_BUTTON2, _("Anuluj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	GridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(Panel2, ID_BUTTON3, _("Potwierdź"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	GridSizer3->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	DatePickerCtrl1 = new wxDatePickerCtrl(Panel2, ID_DATEPICKERCTRL1, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL1"));
	GridSizer3->Add(DatePickerCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
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

	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ZmienDzienFrame::ZmienDzienMenuAnuluj);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ZmienDzienFrame::ZmienDzienMenuNastepnyDzien);
	//*)
}

ZmienDzienFrame::~ZmienDzienFrame()
{
	//(*Destroy(ZmienDzienFrame)
	//*)
}


void ZmienDzienFrame::ZmienDzienMenuPoprzedniDzien(wxCommandEvent& event)
{
}

void ZmienDzienFrame::ZmienDzienMenuNastepnyDzien(wxCommandEvent& event)
{
}

void ZmienDzienFrame::ZmienDzienMenuAnuluj(wxCommandEvent& event)
{
}
