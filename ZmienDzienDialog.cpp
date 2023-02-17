#include "ZmienDzienDialog.h"

//(*InternalHeaders(ZmienDzienDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ZmienDzienDialog)
const long ZmienDzienDialog::ID_STATICTEXT1 = wxNewId();
const long ZmienDzienDialog::ID_DATEPICKERCTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ZmienDzienDialog,wxDialog)
	//(*EventTable(ZmienDzienDialog)
	//*)
END_EVENT_TABLE()

ZmienDzienDialog::ZmienDzienDialog(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(ZmienDzienDialog)
	wxGridSizer* GridSizer1;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	GridSizer1 = new wxGridSizer(2, 2, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Zmień Dzień"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	GridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	DatePickerCtrl1 = new wxDatePickerCtrl(this, ID_DATEPICKERCTRL1, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL1"));
	GridSizer1->Add(DatePickerCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, wxID_CANCEL, _("Anuluj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_CANCEL"));
	GridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, wxID_OK, _("Potwierdź"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_OK"));
	GridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(GridSizer1);
	GridSizer1->Fit(this);
	GridSizer1->SetSizeHints(this);
	//*)
}

ZmienDzienDialog::~ZmienDzienDialog()
{
	//(*Destroy(ZmienDzienDialog)
	//*)
}

wxDateTime ZmienDzienDialog::pobierzdate()
{
    return DatePickerCtrl1->GetValue();
}

