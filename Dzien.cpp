#include "dzien.h"

void dzien::write_dzien()
{
        wxString buff = chosendate.FormatISODate();
        std::fstream plik;
        plik.open(buff.mbc_str() ,std::ios::out | std::ios::trunc);


        plik<<"kalorie=\""<<kalorie<<"\"\n";
        plik<<"bialka=\""<<bialka<<"\"\n";
        plik<<"weglowodany=\""<<weglowodany<<"\"\n";
        plik<<"tluszcze=\""<<tluszcze<<"\"\n\n\n";
}

void dzien::otworz_dzien(wxDateTime czas)
{
    wxString buff = czas.FormatISODate();
    chosendate = czas;
    std::fstream plik;
    plik.open(buff.mbc_str() , std::ios::in);

    if(plik.good())
    {
        std::string buffor;

        plik.ignore(1000,'=');
        plik.get();
        getline(plik, buffor,'\"');
        kalorie=stoi(buffor);

        plik.ignore(1000,'=');
        plik.get();
        getline(plik, buffor,'\"');
        bialka=stoi(buffor);

        plik.ignore(1000,'=');
        plik.get();
        getline(plik, buffor,'\"');
        weglowodany=stoi(buffor);

        plik.ignore(1000,'=');
        plik.get();
        getline(plik, buffor,'\"');
        tluszcze=stoi(buffor);
    }
    else
    {
        plik.close();
        plik.open(buff.mbc_str(),std::ios::out);
         kalorie = 0;
         bialka = 0;
         tluszcze = 0;
         weglowodany = 0;
         this->write_dzien();
    }

    plik.close();

    return;

}
