#ifndef UZYTKOWNIK_H_INCLUDED
#define UZYTKOWNIK_H_INCLUDED

#include <iostream>
#include <fstream>


class uzytkownik{
private:
    std::string nazwa;
    double waga;
    double wzrost;
    double do_zrzucenia;
    double wiek;
    bool plec;
public:
    void init_uzytkownik(std::string nazwa_uzytkownika);

    bool read_uzytkownik();

    bool write_uzytkownik();

    friend  class WprowadzDane;
    friend  class  upsFrame;
    };

#endif // UZYTKOWNIK_H_INCLUDED
