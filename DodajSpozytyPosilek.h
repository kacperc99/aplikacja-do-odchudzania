#ifndef DODAJSPOZYTYPOSILEK_H
#define DODAJSPOZYTYPOSILEK_H
#include "posilek.h"


//(*Headers(DodajSpozytyPosilek)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class DodajSpozytyPosilek: public wxDialog
{
	public:

	    void generate_choices(baza_posilki *nasza);

		DodajSpozytyPosilek(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~DodajSpozytyPosilek();
		int zwroc_indeks();

		//(*Declarations(DodajSpozytyPosilek)
		wxButton* Button1;
		wxButton* Button2;
		wxChoice* Choice1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(DodajSpozytyPosilek)
		static const long ID_STATICTEXT1;
		static const long ID_CHOICE1;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(DodajSpozytyPosilek)
		void OnChoice1Select(wxCommandEvent& event);
		void OnChoice1Select1(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
