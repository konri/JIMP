#ifndef OGNIWO_H
#define OGNIWO_H

class Ogniwo
{
private:
	Ogniwo * _nt;
	int _id;
public:
	Ogniwo( Ogniwo * nt, int id ): _nt(nt), _id(id) {};
	int getId() { return _id ; }
	Ogniwo* getNt() { return _nt;}
	


};

#endif