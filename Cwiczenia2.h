#ifndef CWICZENIA2_H
#define CWICZENIA2_H

//(*Headers(Cwiczenia2)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class Cwiczenia2: public wxDialog
{
	public:

		Cwiczenia2(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Cwiczenia2();

		//(*Declarations(Cwiczenia2)
		wxStaticText* StaticText2;
		wxButton* Button1;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxButton* Button2;
		wxButton* Button3;
		wxPanel* Panel2;
		//*)

	protected:

		//(*Identifiers(Cwiczenia2)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(Cwiczenia2)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
