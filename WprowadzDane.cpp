#include "WprowadzDane.h"

//(*InternalHeaders(WprowadzDane)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(WprowadzDane)
const long WprowadzDane::ID_STATICTEXT1 = wxNewId();
const long WprowadzDane::ID_TEXTCTRL1 = wxNewId();
const long WprowadzDane::ID_STATICTEXT2 = wxNewId();
const long WprowadzDane::ID_TEXTCTRL2 = wxNewId();
const long WprowadzDane::ID_STATICTEXT3 = wxNewId();
const long WprowadzDane::ID_TEXTCTRL3 = wxNewId();
const long WprowadzDane::ID_STATICTEXT6 = wxNewId();
const long WprowadzDane::ID_TEXTCTRL5 = wxNewId();
const long WprowadzDane::ID_STATICTEXT5 = wxNewId();
const long WprowadzDane::ID_RADIOBUTTON1 = wxNewId();
const long WprowadzDane::ID_RADIOBUTTON2 = wxNewId();
const long WprowadzDane::ID_PANEL2 = wxNewId();
const long WprowadzDane::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(WprowadzDane,wxDialog)
	//(*EventTable(WprowadzDane)
	//*)
END_EVENT_TABLE()

WprowadzDane::WprowadzDane(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(WprowadzDane)
	wxBoxSizer* BoxSizer1;
	wxGridSizer* GridSizer1;
	wxGridSizer* GridSizer2;
	wxGridSizer* GridSizer3;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(658,469));
	GridSizer1 = new wxGridSizer(1, 1, 0, 0);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	GridSizer2 = new wxGridSizer(1, 1, 0, 0);
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	GridSizer3 = new wxGridSizer(6, 2, 0, 0);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Twoja waga"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	GridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(Panel2, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	GridSizer3->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Twój wzrost"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	GridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl2 = new wxTextCtrl(Panel2, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	GridSizer3->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Waga docelowa"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	GridSizer3->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl3 = new wxTextCtrl(Panel2, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	GridSizer3->Add(TextCtrl3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT6, _("Twój wiek"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	GridSizer3->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl5 = new wxTextCtrl(Panel2, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	GridSizer3->Add(TextCtrl5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("Płeć"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	GridSizer3->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	RadioButton1 = new wxRadioButton(Panel2, ID_RADIOBUTTON1, _("Mężczyzna"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
	BoxSizer1->Add(RadioButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RadioButton2 = new wxRadioButton(Panel2, ID_RADIOBUTTON2, _("Kobieta"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
	BoxSizer1->Add(RadioButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer3->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel2, wxID_CANCEL, _("Anuluj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_CANCEL"));
	GridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(Panel2, wxID_OK, _("Potwierdź"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_OK"));
	GridSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel2->SetSizer(GridSizer3);
	GridSizer3->Fit(Panel2);
	GridSizer3->SetSizeHints(Panel2);
	GridSizer2->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(GridSizer2);
	GridSizer2->Fit(Panel1);
	GridSizer2->SetSizeHints(Panel1);
	GridSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(GridSizer1);
	SetSizer(GridSizer1);
	Layout();

	Connect(ID_RADIOBUTTON1,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&WprowadzDane::OnRadioButtonMSelect);
	Connect(ID_RADIOBUTTON2,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&WprowadzDane::OnRadioFSelect);
	//*)
}

WprowadzDane::~WprowadzDane()
{
	//(*Destroy(WprowadzDane)
	//*)
}

void WprowadzDane::pobierzdane(uzytkownik *nowe_dane)
	    {
                wxString buffor;
                double numbuff;

                buffor = TextCtrl1->GetValue();
                buffor.ToDouble(&numbuff);
                nowe_dane->waga = numbuff;

                buffor = TextCtrl2->GetValue();
                buffor.ToDouble(&numbuff);
                nowe_dane->wzrost = numbuff;

                buffor = TextCtrl3->GetValue();
                buffor.ToDouble(&numbuff);
                nowe_dane->do_zrzucenia = numbuff;

                buffor = TextCtrl5->GetValue();
                buffor.ToDouble(&numbuff);
                nowe_dane->wiek = numbuff;

                nowe_dane->plec=plec;
	    }


void WprowadzDane::OnRadioButtonMSelect(wxCommandEvent& event)
{
    plec = true;
}

void WprowadzDane::OnRadioFSelect(wxCommandEvent& event)
{
    plec = false;
}
