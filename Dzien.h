#ifndef DZIEN_H_INCLUDED
#define DZIEN_H_INCLUDED

#include <iostream>
#include <fstream>
#include <wx/datetime.h>
#include <wx/string.h>

class dzien
{
public:
    int kalorie;
    int bialka;
    int tluszcze;
    int weglowodany;
    wxDateTime chosendate;

    void otworz_dzien(wxDateTime czas);
    void write_dzien();
};

#endif // DZIEN_H_INCLUDED
