// Deklaracja znajduje siew pliku punkt.h
#ifndef PUNKT_H
#define PUNKT_H
 
class Punkt{
  private:
    double x, y;
  public:
    //Konstruktor bezparametrowy
    Punkt();
    //Konstruktor parametrowy
    Punkt(double _x, double _y);
	//konstruktor kopiujacy
	Punkt(Punkt & wzor);
    //Destruktor
    ~Punkt();
 
    double distance(Punkt inny);
    void wyswietl();
 
    // Kr�tkie funkcje mog� by� zdefiniowane w pliku
    // nag��wkowym i b�d� traktowane jako funkcje inline
    double getX(){return x;}
    double getY(){return y;}
    void setX(double _x){x=_x;}
    void setY(double _y){y=_y;}
};
 
#endif	