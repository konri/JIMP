#include <iostream>
#include "Lista.h"
#include "Ogniwo.h"

using namespace std; 

int main()
{
Ogniwo * pOgniwo;
Lista list; 
int val;
do{
	cout<<"Jaka wartosc chcesz dodac? :";
	cin>>val; 
	list.dodaj(7);


}while(val!=0);



cout<<"szukaj: ";

if(list.szukaj(5))
{
	cout<<"znalazlo";
}

system("pause");

}


