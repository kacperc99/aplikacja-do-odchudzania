#ifndef TESTDIALOG_H
#define TESTDIALOG_H

//(*Headers(testdialog)
#include <wx/stattext.h>
#include <wx/panel.h>
#include <wx/dialog.h>
//*)

class testdialog: public wxDialog
{
	public:

		testdialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~testdialog();

		//(*Declarations(testdialog)
		wxStaticText* StaticText2;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(testdialog)
		static const long ID_STATICTEXT1;
		static const long ID_PANEL1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(testdialog)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
