#include "pch.h"
#include "Decorator.h"


Decorator::Decorator()
{
}

Decorator::Decorator(Floor * f)
{
	flr = f;
}


Decorator::~Decorator()
{
}

void Decorator::setMap(int x, int y, int size, char type, char a)
{
	flr->setMap(x, y, size, type, a);
}
