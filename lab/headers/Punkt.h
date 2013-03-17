/*
 * Punkt.h
 *
 *  Created on: 02-03-2013
 *      Author: marcin
 */

#ifndef PUNKT_H_
#define PUNKT_H_

#include <iomanip>
#include <iostream>

using namespace std;

class Punkt {
private:
	double x, y;
public:
	Punkt();
	Punkt(double _x, double _y);
	Punkt(const Punkt&);
	~Punkt();

	double distance(Punkt inny);
	void wyswietl();

	double getX() {
		return x;
	}
	double getY() {
		return y;
	}
	void setX(double _x) {
		x = _x;
	}
	void setY(double _y) {
		y = _y;
	}

	friend istream& operator>>(istream &, Punkt&);
	friend ostream& operator<<(ostream &, Punkt&);
};

#endif /* PUNKT_H_ */
