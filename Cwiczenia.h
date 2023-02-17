#ifndef CWICZENIA_H
#define CWICZENIA_H

#include "baza_cwiczenia.h"

//(*Headers(Cwiczenia)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class Cwiczenia: public wxFrame
{
	public:
	    void RefreshCwiczenia(double spal);
	    baza_cwiczenia usr_cwiczenia;
		Cwiczenia(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Cwiczenia();

		//(*Declarations(Cwiczenia)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(Cwiczenia)
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_BUTTON3;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(Cwiczenia)
		void CwiczeniaMenuNoweCwiczenie(wxCommandEvent& event);
		void CwiczeniaMenuWykonaneCwiczenie(wxCommandEvent& event);
		void CwiczeniaZakonczButton(wxCommandEvent& event);
		//*)

		double spalone;

		DECLARE_EVENT_TABLE()
};

#endif
