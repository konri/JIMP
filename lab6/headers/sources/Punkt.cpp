/*
 * Punkt.cpp
 *
 *  Created on: 02-03-2013
 *      Author: marcin
 */

#include "../Punkt.h"

#include <math.h>
#include <iostream>

using namespace std;

Punkt::Punkt() :
		x(0), y(0) {
	//cout << "Konstruktor bezparametrowy" << endl;
}

Punkt::Punkt(double _x, double _y) {
	//cout << "Konstruktor parametrowy" << endl;
	x = _x;
	y = _y;
}

Punkt::Punkt(const Punkt& p) {
	this->x = p.x;
	this->y = p.y;
	//cout << "Konstruktor kopiujący";
}

Punkt::~Punkt() {
	//cout << "Destruktor! Nic nie robie, bo nie musze zwalniać pamięci!";
	cout << endl;
}

double Punkt::distance(Punkt inny) {
	return sqrt(pow(x - inny.x, 2) + pow(y - inny.y, 2));
}

void Punkt::wyswietl() {
	cout << "(" << x << ";" << y << ")";
}

istream& operator>>(istream & input, Punkt& p){
   input.ignore();    // Ignoruj nawias
   input >> p.x;
   input.ignore();    // Ignoruj przecinek
   input >> p.y;
   input.ignore();    // Ignowruj nawias
   return input;      // Umożliwia cin >> a >> b >> c;
}

ostream& operator<<(ostream& output, Punkt& p) {
	output << "(";
	output << p.x;
	output << ", ";
	output << p.y;
	output << ")";
	return output;
}


