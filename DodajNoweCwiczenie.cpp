#include "DodajNoweCwiczenie.h"


//(*InternalHeaders(DodajNoweCwiczenie)




//(*IdInit(DodajNoweCwiczenie)








BEGIN_EVENT_TABLE(DodajNoweCwiczenie,wxDialog)
	//(*EventTable(DodajNoweCwiczenie)
	//*)
END_EVENT_TABLE()

DodajNoweCwiczenie::DodajNoweCwiczenie(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(DodajNoweCwiczenie)



































}

DodajNoweCwiczenie::~DodajNoweCwiczenie()
{
	//(*Destroy(DodajNoweCwiczenie)
	//*)
}

cwiczenie DodajNoweCwiczenie::getnewcw()
{
    cwiczenie nowe;
    wxString buff;

    buff = TextCtrl1->GetLineText(0);
    nowe.nazwa = buff;

    nowe.kalorie = SpinCtrlDouble1->GetValue() ;

    return nowe;
}
