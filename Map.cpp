

#include "Map.h"

#include <fstream>
#include <sstream>
#include <cstring>

Map::Map()
{
    MapLoad mapLoader(&map[0]);
    
}

Map::~Map()
{
    
}



int Map::GetCell(int x, int y)
{
    return map[y][x];
}






