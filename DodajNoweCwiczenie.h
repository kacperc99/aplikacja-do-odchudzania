#ifndef DODAJNOWECWICZENIE_H
#define DODAJNOWECWICZENIE_H
#include "baza_cwiczenia.h"
#include <wx/string.h>

//(*Headers(DodajNoweCwiczenie)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class DodajNoweCwiczenie: public wxDialog
{
	public:

        cwiczenie getnewcw();

		DodajNoweCwiczenie(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~DodajNoweCwiczenie();

		//(*Declarations(DodajNoweCwiczenie)
		wxButton* Button1;
		wxButton* Button2;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxSpinCtrlDouble* SpinCtrlDouble1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(DodajNoweCwiczenie)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_SPINCTRLDOUBLE1;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(DodajNoweCwiczenie)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
