#include "game.h"


game::game(int lignes, int colonnes, unique_ptr<player> player, vector<unique_ptr<tawny>> tawnys, vector<unique_ptr<trap>> traps, vector<unique_ptr<tree>> trees)
:d_terrain{lignes, colonnes, move(player), move(tawnys), move(traps), move(trees)}, nbFauvesMorts{0}, nbTours{0}{

}

void game::incrNbrFauvesMorts(){
    nbFauvesMorts++;
}

void game::incrNbrTours(){
    nbTours++;
}

terrain& game::terrainDeJeu(){
    return d_terrain;
}

void game::play(){
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


