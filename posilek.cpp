#include "posilek.h"


void baza_posilki::init_baza_posilki(string nazwa)
{
    nazwa_bazy=nazwa;
}


bool baza_posilki::read_baza()
{
    fstream plik;
    posilek buff_posilek;
    string buffor;

    plik.open(nazwa_bazy, ios::in);

    while(true)
        {


            plik.ignore(1000,'=');
            if(plik.eof()) break; //warunek wyjœcia petli
            plik.get();
            getline(plik,buff_posilek.nazwa,'\"');

            plik.ignore(1000,'=');
            plik.get();
            getline(plik, buffor,'\"');
            buff_posilek.kalorie=stoi(buffor);

            plik.ignore(1000,'=');
            plik.get();
            getline(plik, buffor,'\"');
            buff_posilek.bialka=stoi(buffor);

            plik.ignore(1000,'=');
            plik.get();
            getline(plik, buffor,'\"');
            buff_posilek.weglowodany=stoi(buffor);

            plik.ignore(1000,'=');
            plik.get();
            getline(plik,buffor,'\"');
            buff_posilek.tluszcze=stoi(buffor);

            baza_posilkow.push_back(buff_posilek);

        }

    plik.close();
    return true;
}

bool baza_posilki::write_baza()
{
    list<posilek>::iterator it;
    fstream plik;
    plik.open(nazwa_bazy,ios::out | ios::trunc);

    for(it=baza_posilkow.begin();it!=baza_posilkow.end();++it)
    {
        plik<<"nazwa=\""<<it->nazwa<<"\"\n";
        plik<<"kalorie=\""<<it->kalorie<<"\"\n";
        plik<<"bialka=\""<<it->bialka<<"\"\n";
        plik<<"weglowodany=\""<<it->weglowodany<<"\"\n";
        plik<<"tluszcze=\""<<it->tluszcze<<"\"\n\n\n";
    }

    return true;
}


bool baza_posilki::create_posilek(posilek nowy)
{
    baza_posilkow.push_back(nowy);

    return true;
}


posilek baza_posilki::znajdz_pos(int indeks)
{
    list<posilek>::iterator it;
    it=baza_posilkow.begin();
    int i=0;
    while(i<indeks)
    {
        ++i;
        ++it;
    }


    return *it;
}
