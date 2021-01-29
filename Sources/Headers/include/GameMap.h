#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h" 

class GameMap {
public:
    GameMap();

    MapCell* PlayerCell;
    MapCell cells[15][10];

    void Draw ();
    //Estta funcion obtinen las coordenadas y actualzia el map
    void SetPlayerCell(int PlayerX, int PlayerY );

protected:
    void LoadMapFromFile();

private:    
};

#endif