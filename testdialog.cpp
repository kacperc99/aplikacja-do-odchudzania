#include "testdialog.h"

//(*InternalHeaders(testdialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(testdialog)
const long testdialog::ID_STATICTEXT1 = wxNewId();
const long testdialog::ID_PANEL1 = wxNewId();
const long testdialog::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(testdialog,wxDialog)
	//(*EventTable(testdialog)
	//*)
END_EVENT_TABLE()

testdialog::testdialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(testdialog)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(99,48));
	Move(wxDefaultPosition);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("chuj"), wxPoint(176,192), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(72,24), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("chuj"), wxPoint(32,24), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	//*)
}

testdialog::~testdialog()
{
	//(*Destroy(testdialog)
	//*)
}

