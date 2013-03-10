#ifndef KWADRAT_H
#define KWADRAT_H
#include "Punkt.h"
class Kwadrat
{
public:
	Kwadrat();
	Kwadrat(int a1, int a2, int b1, int b2, int c1, int c2, int d1, int d2);
	double pole();
	double obwod();
	~Kwadrat();
private:
	Punkt p1,p2,p3,p4;
};

#endif;

