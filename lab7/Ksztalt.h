#ifndef __KSZTALT
#define __KSZTALT
#include <iostream>
using namespace std;
class Ksztalt
{
public:
	Ksztalt(){}
	virtual void rysuj() = 0;
};

class Kolko : public Ksztalt
{
public:
	Kolko() : Ksztalt() {}
	void rysuj()
	{
		 cout << " *" << endl 
			  << "***"<< endl 
			  << " *" << endl 
			  << endl;
	}

};
class Trojkat : public Ksztalt
{
public:
	Trojkat() : Ksztalt(){}
	void rysuj()
	{
		cout << "  *" << endl 
			 << " ***"<< endl 
			 << "*****" << endl 
			 << endl;
	}
};
class Kwadrat : public Ksztalt
{
public:
	Kwadrat() : Ksztalt(){}
	void rysuj()
	{
		 cout << "*****" << endl 
			  << "*****" << endl 
			  << "*****" << endl 
			  << endl;
	}
};


#endif