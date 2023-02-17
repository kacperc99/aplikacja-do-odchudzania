/***************************************************************
 * Name:      upsMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-12-29
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef UPSMAIN_H
#define UPSMAIN_H

#include "posilek.h"
#include "uzytkownik.h"
#include "baza_cwiczenia.h"
#include "dzien.h"

//(*Headers(upsFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

class upsFrame: public wxFrame
{
    public:

        upsFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~upsFrame();

        baza_posilki usr_posilki;
        uzytkownik default_user;

        dzien teraz;

        void upsFrameRefresh();

    private:

        void ustaw_spozycie();


        //(*Handlers(upsFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void MainMenuWprowadzDane(wxCommandEvent& event);
        void MainMenuCwiczenia(wxCommandEvent& event);
        void MainMenuDodajPosilek(wxCommandEvent& event);
        void MainMenuZmienDzien(wxCommandEvent& event);
        void MainMenuDodajSpozytyPosilek(wxCommandEvent& event);
        void MainMenuZapiszIZakoncz(wxCommandEvent& event);
        //*)

        //(*Identifiers(upsFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT8;
        static const long ID_STATICTEXT9;
        static const long ID_STATICTEXT10;
        static const long ID_STATICTEXT11;
        static const long ID_STATICTEXT12;
        static const long ID_STATICTEXT13;
        static const long ID_STATICTEXT14;
        static const long ID_STATICTEXT15;
        static const long ID_STATICTEXT16;
        static const long ID_STATICTEXT17;
        static const long ID_STATICTEXT18;
        static const long ID_STATICTEXT19;
        static const long ID_STATICTEXT20;
        static const long ID_STATICTEXT21;
        static const long ID_STATICTEXT22;
        static const long ID_STATICTEXT23;
        static const long ID_STATICTEXT24;
        static const long ID_BUTTON5;
        static const long ID_STATICTEXT25;
        static const long ID_STATICTEXT26;
        static const long ID_BUTTON6;
        static const long ID_PANEL2;
        static const long ID_PANEL1;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(upsFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxButton* Button5;
        wxButton* Button6;
        wxPanel* Panel1;
        wxPanel* Panel2;
        wxStaticText* StaticText10;
        wxStaticText* StaticText11;
        wxStaticText* StaticText12;
        wxStaticText* StaticText13;
        wxStaticText* StaticText14;
        wxStaticText* StaticText15;
        wxStaticText* StaticText16;
        wxStaticText* StaticText17;
        wxStaticText* StaticText18;
        wxStaticText* StaticText19;
        wxStaticText* StaticText1;
        wxStaticText* StaticText20;
        wxStaticText* StaticText21;
        wxStaticText* StaticText22;
        wxStaticText* StaticText23;
        wxStaticText* StaticText24;
        wxStaticText* StaticText25;
        wxStaticText* StaticText26;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStaticText* StaticText7;
        wxStaticText* StaticText8;
        wxStaticText* StaticText9;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // UPSMAIN_H
