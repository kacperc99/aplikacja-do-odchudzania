#ifndef ZMIENDZIENFRAME_H
#define ZMIENDZIENFRAME_H

//(*Headers(ZmienDzienFrame)
#include <wx/button.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class ZmienDzienFrame: public wxFrame
{
	public:

		ZmienDzienFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ZmienDzienFrame();

		//(*Declarations(ZmienDzienFrame)
		wxButton* Button2;
		wxButton* Button3;
		wxDatePickerCtrl* DatePickerCtrl1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(ZmienDzienFrame)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_DATEPICKERCTRL1;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(ZmienDzienFrame)
		void ZmienDzienMenuPoprzedniDzien(wxCommandEvent& event);
		void ZmienDzienMenuNastepnyDzien(wxCommandEvent& event);
		void ZmienDzienMenuAnuluj(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
