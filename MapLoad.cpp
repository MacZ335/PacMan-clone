#include "MapLoad.h"
#include <fstream>
#include <sstream>
#include <cstring>

MapLoad::MapLoad(int(*map)[21]) : map(map)
{
    LoadMapFromFile();
}


void MapLoad::LoadMapFromFile()
{
    std::string FileName = "Graphics/mapa.txt";
    std::ifstream file(FileName);

    std::string line;
    int y = 0;
    while (std::getline(file, line) && y < cellCount)
    {
        std::istringstream iss(line);
        int x = 0;
        int value;
        while (iss >> value && x < cellCount)
        {
            map[y][x] = value;
            x++;
        }
        y++;
    }

    file.close();
}
