#pragma once
#include "Decorator.h"
class Wall: public Decorator
{
	int xPos, yPos = 0;
	int wallSize = 1;
	char wallType = 'v';
	char wallChar = 'X';

public:
	Wall();
	Wall(int x, int y, int size, char type, char a, Floor *flr) : Decorator(flr) 
	{
		xPos = x;
		yPos = y;
		wallSize = size;
		wallType = type;
		wallChar = a;
	}
	~Wall();
	void setMap();
};

