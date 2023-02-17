#ifndef BAZA_CWICZENIA_H_INCLUDED
#define BAZA_CWICZENIA_H_INCLUDED

#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <iterator>
#include <string>

using namespace std;

struct cwiczenie {

    std::string nazwa;
    double kalorie;

};

class baza_cwiczenia {

private:
    list<cwiczenie> baza_cwiczen;
    string nazwa_bazy;

public:
    void init_baza_cwiczenia(string nazwa_bazy);

    bool read_baza();

    bool write_baza();

    bool create_cwicznie(cwiczenie nowe);

    cwiczenie znajdz_cw(int indeks);

    friend class DodajWykonaneCwiczenie;
};

#endif // BAZA_CWICZENIA_H_INCLUDED
