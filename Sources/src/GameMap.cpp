#include "../Headers/include/GameMap.h"
#include <iostream>
#include <fstream>
using namespace std;

GameMap::GameMap(){
    PlayerCell = NULL;
}

void GameMap::Draw(){
    for(int i = 0; i < 15; i++){
        for (int p = 0; p < 10; p++)
        {
            cout << cells[i][p].id;
        }
        cout << endl;
        
    }
}

void GameMap::SetPlayerCell(int PlayerX, int PlayerY){
    if (PlayerCell != NULL)
    {
        PlayerCell->id=0;
    }
    
    PlayerCell = &cells[PlayerY][PlayerX];
    PlayerCell->id = 3;
    //cout << "Las coordenadas de mi jugador son" << PlayerX << "," << PlayerY << endl;
}

void GameMap::LoadMapFromFile(){
    string line;
    ifstream 
}