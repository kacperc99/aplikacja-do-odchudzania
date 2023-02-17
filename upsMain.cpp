/***************************************************************
 * Name:      upsMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2020-12-29
 * Copyright:  ()
 * License:
 **************************************************************/

#include "upsMain.h"
#include <wx/msgdlg.h>
#include <wx/frame.h>
#include "WprowadzDane.h"
#include "Cwiczenia2.h"
#include "Cwiczenia.h"
#include "DodajNoweCwiczenie.h"
#include "upsApp.h"
#include "DodajPosilek.h"
#include "ZmienDzienDialog.h"
#include "DodajSpozytyPosilek.h"
#include <wx/app.h>
#include <sstream>

//(*InternalHeaders(upsFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODENie
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(upsFrame)
const long upsFrame::ID_BUTTON1 = wxNewId();
const long upsFrame::ID_BUTTON2 = wxNewId();
const long upsFrame::ID_BUTTON3 = wxNewId();
const long upsFrame::ID_BUTTON4 = wxNewId();
const long upsFrame::ID_STATICTEXT1 = wxNewId();
const long upsFrame::ID_STATICTEXT2 = wxNewId();
const long upsFrame::ID_STATICTEXT3 = wxNewId();
const long upsFrame::ID_STATICTEXT4 = wxNewId();
const long upsFrame::ID_STATICTEXT5 = wxNewId();
const long upsFrame::ID_STATICTEXT6 = wxNewId();
const long upsFrame::ID_STATICTEXT7 = wxNewId();
const long upsFrame::ID_STATICTEXT8 = wxNewId();
const long upsFrame::ID_STATICTEXT9 = wxNewId();
const long upsFrame::ID_STATICTEXT10 = wxNewId();
const long upsFrame::ID_STATICTEXT11 = wxNewId();
const long upsFrame::ID_STATICTEXT12 = wxNewId();
const long upsFrame::ID_STATICTEXT13 = wxNewId();
const long upsFrame::ID_STATICTEXT14 = wxNewId();
const long upsFrame::ID_STATICTEXT15 = wxNewId();
const long upsFrame::ID_STATICTEXT16 = wxNewId();
const long upsFrame::ID_STATICTEXT17 = wxNewId();
const long upsFrame::ID_STATICTEXT18 = wxNewId();
const long upsFrame::ID_STATICTEXT19 = wxNewId();
const long upsFrame::ID_STATICTEXT20 = wxNewId();
const long upsFrame::ID_STATICTEXT21 = wxNewId();
const long upsFrame::ID_STATICTEXT22 = wxNewId();
const long upsFrame::ID_STATICTEXT23 = wxNewId();
const long upsFrame::ID_STATICTEXT24 = wxNewId();
const long upsFrame::ID_BUTTON5 = wxNewId();
const long upsFrame::ID_STATICTEXT25 = wxNewId();
const long upsFrame::ID_STATICTEXT26 = wxNewId();
const long upsFrame::ID_BUTTON6 = wxNewId();
const long upsFrame::ID_PANEL2 = wxNewId();
const long upsFrame::ID_PANEL1 = wxNewId();
const long upsFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(upsFrame,wxFrame)
    //(*EventTable(upsFrame)
    //*)
END_EVENT_TABLE()

upsFrame::upsFrame(wxWindow* parent,wxWindowID id)
{

    usr_posilki.init_baza_posilki("posilki");

    default_user.init_uzytkownik("default_user");

     //wxDateTime initTime(wxWidgets::Today());
    //teraz.otworz_dzien(initTime);
    //ustaw_spozycie();

    usr_posilki.read_baza();
    default_user.read_uzytkownik();

    //(*Initialize(upsFrame)
    wxGridSizer* GridSizer1;
    wxGridSizer* GridSizer2;
    wxGridSizer* GridSizer3;
    wxGridSizer* GridSizer4;
    wxGridSizer* GridSizer5;
    wxGridSizer* GridSizer6;
    wxGridSizer* GridSizer7;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    GridSizer1 = new wxGridSizer(0, 0, 0, 0);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    GridSizer2 = new wxGridSizer(1, 1, 0, 0);
    Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    GridSizer3 = new wxGridSizer(8, 4, 0, 0);
    Button1 = new wxButton(Panel2, ID_BUTTON1, _("Wprowadz dane"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    GridSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(Panel2, ID_BUTTON2, _("Cwiczenia"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    GridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(Panel2, ID_BUTTON3, _("Dodaj Posilek"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    GridSizer3->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(Panel2, ID_BUTTON4, _("Zmien dzien"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    GridSizer3->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Kalorie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    GridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Bialka"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    GridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Tluszcze"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    GridSizer3->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("Weglowodany"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    GridSizer3->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer4 = new wxGridSizer(1, 3, 0, 0);
    StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    GridSizer4->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT6, _("/"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    GridSizer4->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText7 = new wxStaticText(Panel2, ID_STATICTEXT7, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    GridSizer4->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(GridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer5 = new wxGridSizer(1, 3, 0, 0);
    StaticText8 = new wxStaticText(Panel2, ID_STATICTEXT8, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    GridSizer5->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText9 = new wxStaticText(Panel2, ID_STATICTEXT9, _("/"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    GridSizer5->Add(StaticText9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText10 = new wxStaticText(Panel2, ID_STATICTEXT10, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    GridSizer5->Add(StaticText10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(GridSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer6 = new wxGridSizer(1, 3, 0, 0);
    StaticText11 = new wxStaticText(Panel2, ID_STATICTEXT11, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    GridSizer6->Add(StaticText11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText12 = new wxStaticText(Panel2, ID_STATICTEXT12, _("/"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    GridSizer6->Add(StaticText12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText13 = new wxStaticText(Panel2, ID_STATICTEXT13, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
    GridSizer6->Add(StaticText13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(GridSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer7 = new wxGridSizer(1, 3, 0, 0);
    StaticText14 = new wxStaticText(Panel2, ID_STATICTEXT14, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
    GridSizer7->Add(StaticText14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText15 = new wxStaticText(Panel2, ID_STATICTEXT15, _("/"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
    GridSizer7->Add(StaticText15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText16 = new wxStaticText(Panel2, ID_STATICTEXT16, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
    GridSizer7->Add(StaticText16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(GridSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText17 = new wxStaticText(Panel2, ID_STATICTEXT17, _("Sniadanie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
    GridSizer3->Add(StaticText17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText18 = new wxStaticText(Panel2, ID_STATICTEXT18, _("Obiad"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT18"));
    GridSizer3->Add(StaticText18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText19 = new wxStaticText(Panel2, ID_STATICTEXT19, _("Kolacja"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
    GridSizer3->Add(StaticText19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText20 = new wxStaticText(Panel2, ID_STATICTEXT20, _("Inne"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
    GridSizer3->Add(StaticText20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText21 = new wxStaticText(Panel2, ID_STATICTEXT21, _("Nie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
    GridSizer3->Add(StaticText21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText22 = new wxStaticText(Panel2, ID_STATICTEXT22, _("Nie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT22"));
    GridSizer3->Add(StaticText22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText23 = new wxStaticText(Panel2, ID_STATICTEXT23, _("Nie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT23"));
    GridSizer3->Add(StaticText23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText24 = new wxStaticText(Panel2, ID_STATICTEXT24, _("Nie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT24"));
    GridSizer3->Add(StaticText24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button5 = new wxButton(Panel2, ID_BUTTON5, _("Dodaj Spozyty Posilek"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    GridSizer3->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText25 = new wxStaticText(Panel2, ID_STATICTEXT25, _("Dzien"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT25"));
    GridSizer3->Add(StaticText25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText26 = new wxStaticText(Panel2, ID_STATICTEXT26, _("Data"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT26"));
    GridSizer3->Add(StaticText26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button6 = new wxButton(Panel2, ID_BUTTON6, _("Zapisz i Zakoncz"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
    GridSizer3->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel2->SetSizer(GridSizer3);
    GridSizer3->Fit(Panel2);
    GridSizer3->SetSizeHints(Panel2);
    GridSizer2->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    Panel1->SetSizer(GridSizer2);
    GridSizer2->Fit(Panel1);
    GridSizer2->SetSizeHints(Panel1);
    GridSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    SetSizer(GridSizer1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    GridSizer1->Fit(this);
    GridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&upsFrame::MainMenuWprowadzDane);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&upsFrame::MainMenuCwiczenia);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&upsFrame::MainMenuDodajPosilek);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&upsFrame::MainMenuZmienDzien);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&upsFrame::MainMenuDodajSpozytyPosilek);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&upsFrame::MainMenuZapiszIZakoncz);
    //*)

    upsFrameRefresh();

}

upsFrame::~upsFrame()
{
    //(*Destroy(upsFrame)
    //*)
}

void upsFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void upsFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void upsFrame::MainMenuWprowadzDane(wxCommandEvent& event)
{

    WprowadzDane dialog(this);
    int dlg=dialog.ShowModal();
    if(dlg==wxID_OK)
    {

        dialog.pobierzdane(&default_user);
        default_user.write_uzytkownik();
        upsFrameRefresh();


    }
    if(dlg==wxID_CANCEL)
    {

    }
}

void upsFrame::MainMenuCwiczenia(wxCommandEvent& event)
{

    /*Cwiczenia2 dialog(this);
    int dlg=dialog.ShowModal();
    if(dlg=wxID_OK)
    {
       DodajNoweCwiczenie dialog2(this);
       dialog2.ShowModal();
    }*/
   Cwiczenia *frame=new Cwiczenia(this);
   frame->Show(true);
}

void upsFrame::MainMenuDodajPosilek(wxCommandEvent& event)
{
    posilek nowy;
    DodajPosilek dialog(this);
    int dlg=dialog.ShowModal();
    if(dlg==wxID_OK)
    {
        dialog.pobierzposilek(&nowy);
        usr_posilki.create_posilek(nowy);
    }
    if(dlg==wxID_CANCEL)
    {

    }
}

void upsFrame::MainMenuZmienDzien(wxCommandEvent& event)
{
    wxDateTime currdate;
    ZmienDzienDialog dialog(this);
    int dlg=dialog.ShowModal();
    if(dlg==wxID_OK)
    {
        currdate = dialog.pobierzdate();
        teraz.otworz_dzien(currdate);
        ustaw_spozycie();
    }
    if(dlg==wxID_CANCEL)
    {

    }
}

void upsFrame::MainMenuDodajSpozytyPosilek(wxCommandEvent& event)
{
    posilek buff;
    DodajSpozytyPosilek dialog(this);
    dialog.generate_choices(&usr_posilki);
    int dlg=dialog.ShowModal();
    if(dlg==wxID_OK)
    {
        buff = usr_posilki.znajdz_pos(dialog.zwroc_indeks());
        teraz.bialka = teraz.bialka + buff.bialka;
        teraz.kalorie = teraz.kalorie + buff.kalorie;
        teraz.tluszcze = teraz.tluszcze + buff.tluszcze;
        teraz.weglowodany =teraz.weglowodany + buff.weglowodany;
        ustaw_spozycie();
    }
    if(dlg==wxID_CANCEL)
    {

    }
}

void upsFrame::MainMenuZapiszIZakoncz(wxCommandEvent& event)
{
    default_user.write_uzytkownik();
    usr_posilki.write_baza();
    teraz.write_dzien();
    close(0);
}

void upsFrame::upsFrameRefresh()
{
    double bmr;
    double bial;
    double weglo;
    double tluszcz;

    if(default_user.plec==true)
    {
        bmr=1.35*((((655+(9.6*default_user.waga)+(1.8*default_user.wzrost)-(4.7*default_user.wiek))*7)-(7000*default_user.do_zrzucenia))/7);
    }
    else
    {
        bmr=1.35*((((66 + (13,7 * default_user.waga) + (5 * default_user.wiek) - (6,8 * default_user.wiek) )*7)- (7000*default_user.do_zrzucenia))/7);
    }

    string buff;
    std::ostringstream strs;
    strs.precision(0);
    strs<<std::fixed<<bmr;
    buff = strs.str();

     upsFrame::StaticText7->SetLabel(buff);

    bial=2*default_user.waga;

    tluszcz=default_user.waga;

    weglo=bmr-(15*default_user.waga);

    strs.precision(0);
    strs.str("");
    strs<<std::fixed<<bial;
    buff = strs.str();

    upsFrame::StaticText10->SetLabel(buff);

    strs.precision(0);
    strs.str("");
    strs<<std::fixed<<tluszcz;
    buff = strs.str();

    upsFrame::StaticText13->SetLabel(buff);

    strs.precision(0);
    strs.str("");
    strs<<std::fixed<<weglo;
    buff = strs.str();

    upsFrame::StaticText16->SetLabel(buff);

}

void upsFrame::ustaw_spozycie()
{
    wxString buff;

    buff << teraz.kalorie;
    StaticText5->SetLabel(buff);

    buff = "";
    buff<<teraz.bialka;
    StaticText8->SetLabel(buff);

    buff = "";
    buff<<teraz.tluszcze;
    StaticText11->SetLabel(buff);

    buff = "";
    buff<<teraz.weglowodany;
    StaticText14->SetLabel(buff);

   buff = teraz.chosendate.FormatISODate();
    StaticText26->SetLabel(buff);

}
