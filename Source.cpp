#include<iostream>
using namespace std;

	char *producent()
	{
		char *w;
		cout<<"Tworzenie obiektu"<<endl;
		w = new char; 
		return w;
	}

	int main()
	{
		char *w1, *w2, *w3, *w4,*w7; 
		w1 = producent();
		w2 = producent();	
		w3 = producent();
		w4 = producent();
		w7 = producent();
		*w1 = 'K'; 
		*w2 = 'O';
		*w3 = 'N';
		*w4 = 'r';

		cout<<*w1<<*w2<<*w3<<*w4;
		cout<<endl;
		cout<<"Smieci w w7 "<<*w7;

		delete w1;
		delete w2;
		delete w3;


		system("pause");
	}