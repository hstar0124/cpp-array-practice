#include "Map.h"
#include "Util.h"
#include <iostream>
using namespace std;

int GMap2D[MAP_SIZE][MAP_SIZE] =
{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 2, 2, 0, 0, 0, 1},
	{1, 0, 0, 0, 2, 2, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

void PrintMap2D()
{
	SetCursorPosition(0, 0);

	for (int y = 0; y < MAP_SIZE; y++)
	{
		for (int x = 0; x < MAP_SIZE; x++)
		{
			switch (GMap2D[y][x])
			{
			case 0:
				cout << "□";
				break;
			case 1:
				cout << "■";
				break;
			case 2:
				cout << "＃";
				break;
			}
		}
		cout << endl;
	}
}