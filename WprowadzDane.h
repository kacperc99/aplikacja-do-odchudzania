#ifndef WPROWADZDANE_H
#define WPROWADZDANE_H

#include "uzytkownik.h"

//(*Headers(WprowadzDane)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/radiobut.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class WprowadzDane: public wxDialog
{
	public:

	    void pobierzdane(uzytkownik *nowe_dane);

		WprowadzDane(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~WprowadzDane();

		//(*Declarations(WprowadzDane)
		wxButton* Button1;
		wxButton* Button2;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxRadioButton* RadioButton1;
		wxRadioButton* RadioButton2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl3;
		wxTextCtrl* TextCtrl5;
		//*)

	protected:

		//(*Identifiers(WprowadzDane)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT5;
		static const long ID_RADIOBUTTON1;
		static const long ID_RADIOBUTTON2;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

	private:

	    bool plec;

		//(*Handlers(WprowadzDane)
		void OnRadioButtonMSelect(wxCommandEvent& event);
		void OnRadioFSelect(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
