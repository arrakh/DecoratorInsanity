#include "pch.h"
#include "Wall.h"


Wall::Wall()
{
}


Wall::~Wall()
{
}

void Wall::setMap()
{
	Floor::setMap(xPos, yPos, wallSize, wallType, wallChar);
}
