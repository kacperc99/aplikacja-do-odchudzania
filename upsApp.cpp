/***************************************************************
 * Name:      upsApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-12-29
 * Copyright:  ()
 * License:
 **************************************************************/

#include "upsApp.h"


//(*AppHeaders
#include "upsMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(upsApp);

bool upsApp::OnInit()
{

    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	upsFrame* Frame = new upsFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    return wxsOK;

}
