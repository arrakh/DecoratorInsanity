#pragma once
#include "Floor.h"

class Decorator: public Floor
{
public:
	Floor *flr;
	Decorator();
	Decorator(Floor *f);
	~Decorator();

	void setMap(int x, int y, int size, char type, char a);
};

