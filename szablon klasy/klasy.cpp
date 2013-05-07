#include "klasy.h"

/*Funkcje skladowe zewnetrzne*/
template <class paramX>
pasja<paramX>::pasja(char *_nazwa, paramX _jakis_opis) : nazwa(_nazwa)
{
	jakis_opis = _jakis_opis;

}
template <class paramX>
pasja<paramX>::~pasja()
{
	cout<<"destruktor nic nie robie ale dziala";
}

template<class paramX> 
void pasja<paramX>::jaka()
{
	cout<<"Jaka pasja: "<<nazwa << "opis : " <<jakis_opis<<endl;
}
template <class paramX> 
void pasja<paramX>::funstat()
{
	cout<<"Funkcja statyczna ";

}
//Definicja funkcji przeladowania: 
template <class paramX> 
ostream & operator<<(ostream & output, pasja<paramX> & obj)
{
	output<<"Jaka pasja: "<<obj.nazwa << "opis : " <<obj.jakis_opis<<endl;
	return output;
}