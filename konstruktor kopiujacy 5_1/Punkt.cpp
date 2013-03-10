//Definicja znajduje siê w pliku punkt.cpp
#include "punkt.h"
#include <math.h>
#include <iostream>
 
using namespace std;
 
/* Aby wskazaæ, ze definicja funkcji dotyczy metody danej klasy
  stosujemy tzw. operator zasiêgu - "::" 
*/
 
//Specjalna inicjalizacja zmiennych. Zmienne s¹ inicjowane
//nim zostanie wywo³ane cia³o konstruktora
Punkt::Punkt():x(0),y(0){
  cout << "Konstruktor bezparametrowy" << endl;
}
 
Punkt::Punkt(double _x, double _y){
  cout << "Konstruktor parametrowy" << endl;
  x = _x;
  y = _y;
}
Punkt::Punkt(Punkt & wzor)
{
	x = wzor.x;
	y = wzor.y;
}
Punkt::~Punkt(){
  cout << "Destruktor! Nic nie robie, bo nie musze zwalniaæ pamiêci!";
  cout << endl;
}
 
double Punkt::distance(Punkt inny){
  return sqrt(pow(x-inny.x,2)+pow(y-inny.y,2));
}
 
void Punkt::wyswietl(){
  cout << "(" << x << ";" << y << ")";
}