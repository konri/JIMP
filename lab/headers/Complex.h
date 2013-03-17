/*
 * Zespolona.h
 *
 *  Created on: 03-03-2013
 *      Author: marcin
 */

#ifndef ZESPOLONA_H_
#define ZESPOLONA_H_

#include <iostream>
#include <cmath>
#include "Matrix.h"

class Complex {
public:
	Complex();
	Complex(double, double);
	virtual ~Complex();

	operator Matrix() const;

	void add(const Complex&);
	void sub(const Complex&);
	void mul(const Complex&);
	void div(const Complex&);
	void pow(unsigned int);

	double mod();

	void print();

	void setRe(double);
	void setIm(double);

	double getRe() const;
	double getIm() const;

	void operator+=(Complex&);
	void operator-=(Complex&);

	friend Complex operator+(Complex&, Complex&);
	friend Complex operator-(Complex&, Complex&);
	friend Complex operator*(Complex&, Complex&);
	friend Complex operator/(Complex&, Complex&);
	friend bool operator==(Complex&, Complex&);

private:
	double re, im;
};

#endif /* ZESPOLONA_H_ */
