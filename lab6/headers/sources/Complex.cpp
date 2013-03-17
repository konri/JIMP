/*
 * Complex.cpp
 *
 *  Created on: 03-03-2013
 *      Author: marcin
 */

#include "../Complex.h"

Complex::Complex() {
	re = im = 0;

}

Complex::Complex(double _re, double _im) {
	re = _re;
	im = _im;
}

Complex::~Complex() {

}

Complex::operator Matrix() {
	Matrix temp;
	return temp;
}

void Complex::add(const Complex& c) {
	re += c.getRe();
	im += c.getIm();
}

void Complex::sub(const Complex& c) {
	re -= c.getRe();
	im -= c.getIm();
}

void Complex::mul(const Complex& c) {
	double tempRe = re;
	double tempIm = im;

	re = tempRe * c.getRe() - tempIm * c.getIm();
	im = tempIm * c.getRe() + tempRe * c.getIm();
}

void Complex::div(const Complex& c) {
	double tempRe = re;
	double tempIm = im;

	re = (tempRe * c.getRe() + tempIm * c.getIm()) / (c.getIm() * c.getIm() + c.getRe() * c.getRe());
	im = (tempIm * c.getRe()- tempRe * c.getIm()) / (c.getIm() * c.getIm() + c.getRe() * c.getRe());
}

void Complex::pow(unsigned int p) {
	double angle = asin(im / mod());
	double result = mod();

	for (unsigned int i = 1; i < p; i++) {
		result *= mod();
	}

	re = result * cos(p * angle);
	im = result * sin(p * angle);
}

void Complex::print() {
	std::cout << re;

	if (im != 0) {
		if (im > 0)
			std::cout << " +";
		if (im != 1)
			std::cout << im;
		std::cout << "i";
	}
}

void Complex::setRe(double _re) {
	re = _re;
}

void Complex::setIm(double _im) {
	im = _im;
}

double Complex::getRe() const {
	return re;
}

double Complex::getIm() const {
	return im;
}

double Complex::mod() {
	return sqrt(re * re + im * im);
}

void Complex::operator +=(Complex& _c) {
	add(_c);
}

void Complex::operator -=(Complex& _c) {
	sub(_c);
}

Complex operator+(Complex& _c1, Complex& _c2) {
	Complex temp(_c1);
	temp.add(_c2);

	return temp;
}

Complex operator-(Complex& _c1, Complex& _c2) {
	Complex temp(_c1);
	temp.sub(_c2);

	return temp;
}

Complex operator*(Complex& _c1, Complex& _c2) {
	Complex temp(_c1);
	temp.mul(_c2);

	return temp;
}

Complex operator/(Complex& _c1, Complex& _c2) {
	Complex temp(_c1);
	temp.div(_c2);

	return temp;
}

bool operator==(Complex& _c1, Complex& _c2) {
	bool flag = true;

	if (_c1.getRe() != _c2.getRe())
		flag = false;
	else if (_c1.getIm() != _c2.getIm())
		flag = false;

	return flag;
}
