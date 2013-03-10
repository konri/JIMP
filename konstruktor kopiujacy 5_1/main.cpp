#include <iostream>
#include "Kwadrat.h"
using namespace std; 

int main()
{
	Kwadrat kwadracik; 
	Kwadrat kwadracik_2(1,1,2,2,3,4,5,6); 

	cout<<"Obwod i pole:"<<kwadracik.obwod()<<"  "<<kwadracik.pole()<<endl;
	cout<<"Obwod i pole:"<<kwadracik_2.obwod()<<"  "<<kwadracik_2.pole()<<endl;
	system("pause");
}
