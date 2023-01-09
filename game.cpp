#include "game.h"


Game::Game(int lignes, int colonnes, unique_ptr<Player> player, vector<unique_ptr<Tawny>> tawnys, vector<unique_ptr<Trap>> traps, vector<unique_ptr<Tree>> trees)
:d_terrain{lignes, colonnes, move(player), move(tawnys), move(traps), move(trees)}{

}

Terrain& Game::terrainDeJeu(){
    return d_terrain;
}

void Game::menu(){
    int choix;
	cout<<"|*---------------------------MENU-----------------------------*|"<<endl;
	cout<<endl;
	cout<<"(1)  Jouer sur le terrain par defaut."<<endl;
	cout<<"(2)  Creer terrain."<<endl;
	cout<<"(3)  Charger terrain."<<endl;
	cout<<"(4)  Editer terrain."<<endl;
	cout<<"(5)  Quitter."<<endl;
	cout<<endl;
	cout<<"veuillez selectionner votre choix: ";
	cin>>choix;
	cout<<endl;

	switch(choix){
        case 1 : play();
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
	}
}

void Game::play(){
    cout << "Bienvenue, que le jeu commence !" << endl << endl;

    while(terrainDeJeu().getPlayer()->estVivant() && terrainDeJeu().getTawnys().size() > 0 ){
        terrainDeJeu().afficherTerrain();
        terrainDeJeu().getPlayer()->deplacer(terrainDeJeu());
        if(!terrainDeJeu().getPlayer()->estVivant()) {break;}
        terrainDeJeu().afficherTerrain();
        if(!terrainDeJeu().getPlayer()->estVivant()) {break;}
        for (int i = 0; i < terrainDeJeu().getTawnys().size(); ++i){
            system("pause");
            terrainDeJeu().getTawnys()[i]->deplacer(terrainDeJeu());
            if(!terrainDeJeu().getPlayer()->estVivant()) {break;}
            terrainDeJeu().afficherTerrain();
            if(!terrainDeJeu().getPlayer()->estVivant()) {break;}
        }
        cout << endl;
    }
        cout
		 << "      {{{{{{{{{{{{{{{{{{{{{{}}}}}}}}}}}}}}}}}}}" << endl
		 << "   {{{{{{{{   Nombre de fauves morts :  "<< d_terrain.nbrFauvesMortsPartie() <<"  }}}}}}}" << endl
		 << "      {{{{{{{{{{{{{{{{{{{{{{}}}}}}}}}}}}}}}}}}}" << endl;
}


