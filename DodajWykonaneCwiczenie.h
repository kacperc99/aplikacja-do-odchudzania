#ifndef DODAJWYKONANECWICZENIE_H
#define DODAJWYKONANECWICZENIE_H
#include "baza_cwiczenia.h"


//(*Headers(DodajWykonaneCwiczenie)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
//*)

class DodajWykonaneCwiczenie: public wxDialog
{
	public:

        double get_spalone_kalorie(baza_cwiczenia *nasza);
        void generate_choices(baza_cwiczenia *nasza);
		DodajWykonaneCwiczenie(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~DodajWykonaneCwiczenie();

		//(*Declarations(DodajWykonaneCwiczenie)
		wxButton* Button1;
		wxButton* Button2;
		wxChoice* Choice1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxSpinCtrlDouble* SpinCtrlDouble1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		//*)

	protected:

		//(*Identifiers(DodajWykonaneCwiczenie)
		static const long ID_STATICTEXT1;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT2;
		static const long ID_SPINCTRLDOUBLE1;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(DodajWykonaneCwiczenie)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
