#include <iostream>
#include <cmath>
#include "Kwadrat.h"


Kwadrat::Kwadrat(void)
{
	p1.setX(0);
	p1.setY(0);
	p2.setX(0);
	p2.setY(0);
	p3.setX(0);
	p3.setY(0);
	p4.setX(0);
	p4.setY(0);
	
}


Kwadrat::Kwadrat(int a1, int a2, int b1, int b2, int c1, int c2, int d1, int d2)
{
	p1.setX(a1);
	p1.setY(a2);
	p2.setX(b1);
	p2.setY(b2);
	p3.setX(c1);
	p3.setY(c2);
	p4.setX(d1);
	p4.setY(d2);
	
}
Kwadrat::~Kwadrat()
{
}
double Kwadrat::obwod()
{
	return p1.distance(p2);
}
double Kwadrat::pole()
{
	return pow(obwod(),2);
}
