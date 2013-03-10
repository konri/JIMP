#include<iostream>
#include "Lista.h"
#include "Ogniwo.h"
using namespace std;
int Lista::usun()
{
	Ogniwo * temp = _glowa;	
	_glowa = _glowa->getNt();
	int wynik = temp->getId();
	delete temp;
	return wynik;
}
void Lista::dodaj(int id)
{
	Ogniwo * ogniwo = new Ogniwo( _glowa, id );
	_glowa = ogniwo;
	cout<<"dodano";
}

Lista::~Lista()
{
	while( _glowa )
	{
	Ogniwo *temp=_glowa;
	_glowa=_glowa->getNt();
	delete temp;
	}
}

Ogniwo * Lista::szukaj( int id )
{
	Ogniwo * ogniwo = _glowa;
	
while (ogniwo!=0)
{
	cout<<"ogniwo: "<<ogniwo->getId()<<endl;
if( ogniwo->getId() == id )
{
	cout<<"ds";	
	return ogniwo;
}
cout<<"ff";
ogniwo=ogniwo->getNt();
}
return 0;
}