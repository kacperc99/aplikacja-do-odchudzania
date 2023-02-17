#ifndef POSILEK_H_INCLUDED
#define POSILEK_H_INCLUDED


#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <iterator>

using namespace std;

struct posilek {

    std::string nazwa;
    int kalorie;
    int bialka;
    int tluszcze;
    int weglowodany;

};

class baza_posilki {

public:
    list<posilek> baza_posilkow;
    string nazwa_bazy;

  void init_baza_posilki(string nazwa_bazy);

    bool read_baza();

    bool write_baza();

    bool create_posilek(posilek nowy);

    posilek znajdz_pos(int indeks);

};

#endif // POSILEK_H_INCLUDED
