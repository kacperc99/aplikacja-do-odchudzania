#ifndef DODAJPOSILEK_H
#define DODAJPOSILEK_H

#include "posilek.h"

//(*Headers(DodajPosilek)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class DodajPosilek: public wxDialog
{
	public:

	    void pobierzposilek(posilek *nowy_posilek);

		DodajPosilek(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~DodajPosilek();

		//(*Declarations(DodajPosilek)
		wxButton* Button1;
		wxButton* Button2;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl3;
		wxTextCtrl* TextCtrl4;
		wxTextCtrl* TextCtrl5;
		//*)

	protected:

		//(*Identifiers(DodajPosilek)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(DodajPosilek)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
