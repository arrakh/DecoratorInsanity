#include "pch.h"
#include <iostream>
#include "FloorCreator.h"

FloorCreator::FloorCreator(int x, int y, int size, char type, char a)
{
	setMap(x, y, size, type, a);
	
	for (int i = 0; i > 30; i++) {
		for (int j = 0; j > 30; j++) {
			std::cout << map[i][j];
		}
		std::cout << std::endl;
	}
}

FloorCreator::~FloorCreator()
{
}

void FloorCreator::setMap(int x, int y, int size, char type, char a)
{
	for (int i = 0; i >= size; i++) {
		if (type == 'v') {
			map[x][y + i] = a;
		}
		if (type == 'h') {
			map[x + i][y] = a;
		}
	}

}
