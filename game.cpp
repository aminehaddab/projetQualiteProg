#include "game.h"


Game::Game(int lignes, int colonnes, unique_ptr<Player> player, vector<unique_ptr<Tawny>> tawnys, vector<unique_ptr<Trap>> traps, vector<unique_ptr<Tree>> trees)
:d_terrain{lignes, colonnes, move(player), move(tawnys), move(traps), move(trees)}, nbFauvesMorts{0}, nbTours{0}{

}

void Game::incrNbrFauvesMorts(){
    nbFauvesMorts++;
}

void Game::incrNbrTours(){
    nbTours++;
}

Terrain& Game::terrainDeJeu(){
    return d_terrain;
}

void Game::play(){
    while(terrainDeJeu().getPlayer()->estVivant() && terrainDeJeu().getTawnys().size() > 0 ){
        terrainDeJeu().afficherTerrain();
        terrainDeJeu().getPlayer()->deplacer(terrainDeJeu());
        terrainDeJeu().afficherTerrain();
        if(!terrainDeJeu().getPlayer()->estVivant()) {
            break;
        }
        for (int i = 0; i < terrainDeJeu().getTawnys().size(); ++i){
            system("pause");
            terrainDeJeu().getTawnys()[i]->deplacer(terrainDeJeu());
            terrainDeJeu().afficherTerrain();
            if(!terrainDeJeu().getPlayer()->estVivant()) {
                break;
            }
        }
        cout << endl;
    }
}


