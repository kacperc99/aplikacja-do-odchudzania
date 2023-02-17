#ifndef ZMIENDZIENDIALOG_H
#define ZMIENDZIENDIALOG_H

//(*Headers(ZmienDzienDialog)
#include <wx/button.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class ZmienDzienDialog: public wxDialog
{
	public:

        wxDateTime pobierzdate();
		ZmienDzienDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~ZmienDzienDialog();

		//(*Declarations(ZmienDzienDialog)
		wxButton* Button1;
		wxButton* Button2;
		wxDatePickerCtrl* DatePickerCtrl1;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(ZmienDzienDialog)
		static const long ID_STATICTEXT1;
		static const long ID_DATEPICKERCTRL1;
		//*)

	private:

		//(*Handlers(ZmienDzienDialog)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
