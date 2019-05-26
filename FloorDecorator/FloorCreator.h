#pragma once
#include "Floor.h"
class FloorCreator: public Floor
{
private:
	char map[30][30];
public:
	FloorCreator(int x, int y, int size, char type, char a);
	~FloorCreator();

	void setMap(int x, int y, int size, char type, char a);
};

