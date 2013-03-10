#ifndef LISTA_H
#define LISTA_H
#include "Ogniwo.h"

class Lista
{
private:
	Ogniwo * _glowa;

public:
	Lista(): _glowa(0){};
	~Lista();
	void dodaj( int );
	int usun();
	Ogniwo * szukaj( int id );

};
#endif;