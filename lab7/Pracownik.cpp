#include "Pracownik.h"
double Umowa::pobierzBrutto()
{
	return wynagrodzenieBrutto;
}

double UmowaDzielo::pobierzNetto()
{
	return wynagrodzenieBrutto * 0.5;
}
double UmowaPraca::pobierzNetto()
{
	return wynagrodzenieBrutto*0.7;
}

Pracownik::Pracownik(const Pracownik& wzor)
{
	imie = wzor.imie;
	nazwisko = wzor.nazwisko;
	pesel = wzor.pesel;
	umowa = wzor.umowa;
}

double Pracownik::pobierzPensje()
{
	return umowa->pobierzNetto();
}

ostream& operator<<(ostream& output ,Pracownik& _pracownik)
{
	output <<"Imie: " << _pracownik.imie << " nazwisko: " << _pracownik.nazwisko << " numer pesel: "<<_pracownik.pesel;
	output <<"\n";
	UmowaDzielo* wsk;
	wsk = dynamic_cast<UmowaDzielo*>(_pracownik.umowa);
	if(wsk)
	{
	output <<"Kwota netto pracownika na umowe o dzielo wynosi: " << _pracownik.pobierzPensje();
	}
	else
	{
	output <<"Kwota netto pracownika na umowe o prace wynosi: " << _pracownik.pobierzPensje();
	}
	output<<"\n";
	return output;
}