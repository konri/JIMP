#include "Ksztalt.h"
#include <list>
#include <ctime>
#include <stdlib.h>    
#include <time.h>   
int main()
{
	Ksztalt* kolko = new Kolko();
	Ksztalt* kwadrat = new Kwadrat();
	Ksztalt* trojkat = new Trojkat();
	
	kolko->rysuj();
	kwadrat->rysuj();
	trojkat->rysuj();


	cout<<" Teraz z listy: ";
	list<Ksztalt*>lista_ksztalt;

	srand (time(NULL));

	for(int i=0;i<20;i++)
	{
		switch(rand() % 3)
		{
		case 0: 
			lista_ksztalt.push_back(new Kolko());
		break;
		case 1:
			lista_ksztalt.push_back(new Kwadrat());
		break;
		case 2:
			lista_ksztalt.push_back(new Trojkat());
		break;
		}
	}
	for( list<Ksztalt*>::iterator iter=lista_ksztalt.begin(); iter != lista_ksztalt.end(); ++iter )
	{
		(*iter)->rysuj();
	}

	system("pause");
}
