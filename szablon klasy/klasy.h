#include<iostream>
#include<string>
using namespace std; 
template<class typX>
class schowek
{
	typX sejf; 
public:
	schowek(typX _sejf) : sejf(_sejf) {} 
	typX oddaj() { return sejf; } 
};

//-----------------------------------------------------
template <class paramX> 
class pasja
{
	char *nazwa;
	paramX jakis_opis; 
public:
	pasja(char *_nazwa, paramX _jakis_opis);
	~pasja();
	void jaka();
	static void funstat();
	//Funkcja Friedn przeladowujaca operator 
	template <class paramX>
	friend ostream & operator<<(ostream & output, pasja<paramX> & obj); 
};

/***********************************************************/
/************skladniki statyczne w szablonie klas**********/
/***********************************************************/

//powtorka ze zwyklych klas:
class zamek
{
public:
	static zamek * wsk_siedziby; 
	string nazwa;
	zamek(string _nazwa) : nazwa(_nazwa) {} 

	//--------zwykla f-cja skladowa
	void odpowiedz()
	{
		cout <<" Tu" <<nazwa <<"wsk siedziby=> " <<wsk_siedziby->nazwa<< endl;
	}
	static void gdzie_krol()
	{
		cout<<"F-cja statyczna info gdzie jest krol, siedziba to:"<<wsk_siedziby->nazwa << endl;
	}

};

zamek * zamek::wsk_siedziby; //  <- globalnie trzeba go zdefiniowaæ nasz wskaznik do stalego elementu. 


/***********************************************************/
/************skladniki statyczne w szablonie klas**********/
/***********************************************************/

template<class typeX>
class szato
{
public:
	//---------------------------------
	static int iii;
	static typeX ttt;
	static szato<typeX> * wsk_stolicy;

	//---------------------------------

	string nazwa; 
	szato(string _nazwa) : nazwa(_nazwa) {} 
	

	//---------------------------------
	//zwykla funkcja skladowa 
	void odpowiedz() 
	{
		cout <<"Tu "<<nazwa << " ["<< iii<<",  "<<ttt<<"] stolica jest =>"<<wsk_stolicy->nazwa<<endl;
	}

	//---------------------------------
	static void funstat()
	{
		cout<<"funckja statyczna stolica teraz: "<<wsk_stolicy->nazwa<<endl;
	}

};

/***********************************************************/
//Definicje skladnikow statycznych dla szablonu klasy
/***********************************************************/
template<class typeX> 
int szato<typeX>::iii;

template<class typeX>
typeX szato<typeX>::ttt;

template<class typeX>
szato<typeX> * szato<typeX>::wsk_stolicy;