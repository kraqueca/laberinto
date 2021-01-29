#include <iostream>
#include "src/Player.cpp"
#include "src/MapCell.cpp"
#include "src/GameMap.cpp"

using namespace std;

int main()
{
    bool isGameOver = false;
    GameMap Map;
    Player Hero;
    cout << "Inicia el juego";
    while (isGameOver == false){
        //Este es el loop del juego
        Hero.CallInput();

        //actulizado de informacion heroe a map
        Map.SetPlayerCell(Hero.x, Hero.y);

        //Aqui se dibuja el mapa
        Map.Draw();   
    }
    

    
    return 0;
}