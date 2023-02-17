#include "DodajSpozytyPosilek.h"
#include <list>

//(*InternalHeaders(DodajSpozytyPosilek)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DodajSpozytyPosilek)
const long DodajSpozytyPosilek::ID_STATICTEXT1 = wxNewId();
const long DodajSpozytyPosilek::ID_CHOICE1 = wxNewId();
const long DodajSpozytyPosilek::ID_PANEL2 = wxNewId();
const long DodajSpozytyPosilek::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DodajSpozytyPosilek,wxDialog)
	//(*EventTable(DodajSpozytyPosilek)
	//*)
END_EVENT_TABLE()

DodajSpozytyPosilek::DodajSpozytyPosilek(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(DodajSpozytyPosilek)
	wxGridSizer* GridSizer1;
	wxGridSizer* GridSizer2;
	wxGridSizer* GridSizer3;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	GridSizer1 = new wxGridSizer(1, 1, 0, 0);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	GridSizer2 = new wxGridSizer(1, 1, 0, 0);
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	GridSizer3 = new wxGridSizer(2, 4, 0, 0);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Wybierz Posiłek"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	GridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer3->Add(40,12,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Choice1 = new wxChoice(Panel2, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	GridSizer3->Add(Choice1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer3->Add(19,3,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(Panel2, wxID_OK, _("Potwierdź"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_OK"));
	GridSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer3->Add(0,0,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer3->Add(0,0,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel2, wxID_CANCEL, _("Anuluj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_CANCEL"));
	GridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel2->SetSizer(GridSizer3);
	GridSizer3->Fit(Panel2);
	GridSizer3->SetSizeHints(Panel2);
	GridSizer2->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(GridSizer2);
	GridSizer2->Fit(Panel1);
	GridSizer2->SetSizeHints(Panel1);
	GridSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(GridSizer1);
	GridSizer1->Fit(this);
	GridSizer1->SetSizeHints(this);

	Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&DodajSpozytyPosilek::OnChoice1Select1);
	//*)

}

DodajSpozytyPosilek::~DodajSpozytyPosilek()
{
	//(*Destroy(DodajSpozytyPosilek)
	//*)
}


void DodajSpozytyPosilek::OnChoice1Select(wxCommandEvent& event)
{
}

void DodajSpozytyPosilek::OnChoice1Select1(wxCommandEvent& event)
{
}

void DodajSpozytyPosilek::generate_choices(baza_posilki *nasza)
{
    wxString buff;
    list<posilek>::iterator it;
    for(it=nasza->baza_posilkow.begin();it!=nasza->baza_posilkow.end();++it)
    {
        buff = it->nazwa;
        Choice1->Append(wxString::FromUTF8(buff));
    }

    return;
}

int DodajSpozytyPosilek::zwroc_indeks()
		{
		    return Choice1->GetSelection();
		}
