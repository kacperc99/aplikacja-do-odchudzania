#include "baza_cwiczenia.h"

void baza_cwiczenia::init_baza_cwiczenia(string nazwa)
{
    nazwa_bazy=nazwa;
}


bool baza_cwiczenia::read_baza()
{
    fstream plik;
    cwiczenie buff;
    string buffor;

    plik.open(nazwa_bazy, ios::in);

    while(true)
        {


            plik.ignore(1000,'=');
            if(plik.eof()) break; //warunek wyjœcia petli
            plik.get();
            getline(plik,buff.nazwa,'\"');

            plik.ignore(1000,'=');
            plik.get();
            getline(plik, buffor,'\"');
            buff.kalorie=stod(buffor);


            baza_cwiczen.push_back(buff);

        }

    plik.close();
    return true;
}

bool baza_cwiczenia::write_baza()
{
    list<cwiczenie>::iterator it;
    fstream plik;
    plik.open(nazwa_bazy,ios::out | ios::trunc);

    for(it=baza_cwiczen.begin();it!=baza_cwiczen.end();++it)
    {
        plik<<"nazwa=\""<<it->nazwa<<"\"\n";
        plik<<"kalorie=\""<<it->kalorie<<"\"\n\n\n";
    }


    return true;
}

bool baza_cwiczenia::create_cwicznie(cwiczenie nowe)
{
    this->baza_cwiczen.push_back(nowe);
    return true;
}


cwiczenie baza_cwiczenia::znajdz_cw(int indeks)
{
    list<cwiczenie>::iterator it;
    it=baza_cwiczen.begin();
    int i=0;
    while(i<indeks)
    {
        ++i;
        ++it;
    }


    return *it;
}

