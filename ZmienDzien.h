#ifndef ZMIENDZIEN_H
#define ZMIENDZIEN_H

//(*Headers(ZmienDzien)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class ZmienDzien: public wxDialog
{
	public:

		ZmienDzien(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ZmienDzien();

		//(*Declarations(ZmienDzien)
		wxButton* Button1;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxButton* Button2;
		wxButton* Button3;
		wxPanel* Panel2;
		//*)

	protected:

		//(*Identifiers(ZmienDzien)
		static const long ID_STATICTEXT1;
		static const long wxID_NEXT;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(ZmienDzien)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
