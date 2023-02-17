#include "uzytkownik.h"

bool uzytkownik::write_uzytkownik()
{
    std::fstream plik;
    plik.open(nazwa,std::ios::out | std::ios::trunc);
    plik<<"nazwa=\""<<nazwa<<"\"\n";
    plik<<"waga=\""<<waga<<"\"\n";
    plik<<"wzrost=\""<<wzrost<<"\"\n";
    plik<<"do zrzucenia=\""<<do_zrzucenia<<"\"\n";
    plik<<"wiek=\""<<wiek<<"\"\n";
    if(plec==true)
    {
        plik<<"plec=\""<<"M"<<"\"\n";
    }
    else
    {
        plik<<"plec=\""<<"F"<<"\"\n";
    }

    plik.close();
    return true;
}


bool uzytkownik::read_uzytkownik()
{
    std::fstream plik;
    plik.open(nazwa, std::ios::in);

    std::string buffor;

    plik.ignore(1000,'=');
    plik.get();
    getline(plik,buffor,'\"');
    nazwa=buffor;
    std::cout<<nazwa<<"\n";

    plik.ignore(1000,'=');
    plik.get();
    getline(plik, buffor,'\"');
    waga=stod(buffor);
    std::cout<<waga<<"\n";

    plik.ignore(1000,'=');
    plik.get();
    getline(plik, buffor,'\"');
    wzrost=stod(buffor);
    std::cout<<wzrost<<"\n";

    plik.ignore(1000,'=');
    plik.get();
    getline(plik, buffor,'\"');
    do_zrzucenia=stod(buffor);
    std::cout<<do_zrzucenia<<"\n";

    plik.ignore(1000,'=');
    plik.get();
    getline(plik, buffor,'\"');
    wiek=stod(buffor);
    std::cout<<wiek<<"\n";

    plik.ignore(1000,'=');
    plik.get();
    getline(plik, buffor,'\"');


    if(buffor=="M")
    {
        plec=true;
        std::cout<<"M\n";
    }
    else
    {
        plec=false;
        std::cout<<"F\n";
    }

    plik.close();
    return true;
}

void uzytkownik::init_uzytkownik(std::string nazwa_uzytkownika)
{
    nazwa=nazwa_uzytkownika;
}
