#include<iostream>
#include<cmath>
#include<vector>
#include<memory>
#include<string>
#include<fstream>
#include <sstream>
#include"terrain.h"
#include"point.h"

using namespace std;
using geom::point;

terrain::terrain(int lignes, int colonnes):d_tableau(vector<vector<int>>(lignes, vector<int>(colonnes, 0))) {}

terrain::terrain() {}

vector <vector <int>> terrain::tableau() const {
    return d_tableau;
}

int terrain::nbLignes() const {
    return d_tableau.size();
}

int terrain::nbColonnes(int ligne) const {
    return d_tableau[ligne].size();
}

void terrain::afficherTerrain() const {

    for (int k = 0; k < nbColonnes(0)+2; ++k){
        cout << "@";
    }
    cout << endl;

    for (int i = 0; i < nbLignes(); ++i){
        cout << "@";
        for (int j = 0; j < nbColonnes(i); ++j){

            switch(tableau()[i][j]) {
              case 0:
                cout << "_";
                break;
            };
        }
        cout << "@" << endl;
    }

    for (int k = 0; k < nbColonnes(0)+2; ++k){
        cout << "@";
    }
    cout << endl;
}

bool existe(point p, vector<point> pts){
    for(int i=0; i<pts.size(); ++i){
        if(p==pts[i]){
            return true;
        }
    }
    return false;
}

void terrain::creerTerrain(){

    string nom_terrain;
    cout << "Nom du terrain : " << endl;
    cin >> nom_terrain;

    cout << endl;

    int lignes;
    do{
       cout << "Nombre de lignes du terrain : " << endl;
       cin >> lignes;
    }while(lignes<=0);

    cout << endl;

    int colonnes;
    do{
       cout << "Nombre de colonnes du terrain : " << endl;
       cin >> colonnes;
    }while(colonnes<=0);

    cout << endl;

    vector<point> positions;

    point position_joueur;
    cout << "Coordonnees de la position du joueur : " << endl;
    position_joueur.read(cin);
    if(position_joueur.x()>=lignes || position_joueur.y()>=colonnes || position_joueur.x()<0 || position_joueur.y()<0){
        do{
            cout << "Coordonnees du joueur hors de portee : " << endl;
            position_joueur.read(cin);
        }while(position_joueur.x()>=lignes || position_joueur.y()>=colonnes || position_joueur.x()<0 || position_joueur.y()<0);
    }
    positions.push_back(position_joueur);

    cout << endl;

    int nombre_lions;
    do{
       cout << "Nombre de lions sur le terrain : " << endl;
       cin >> nombre_lions;
    }while(nombre_lions<=0);

    vector<point> positions_lions;
    point position_lion_inter;
    for(int i=0; i<nombre_lions; ++i){
        cout << "Coordonnees de la position du lion numero " << i+1 << " : " << endl;
        position_lion_inter.read(cin);
        if(position_lion_inter.x()>=lignes || position_lion_inter.y()>=colonnes || position_lion_inter.x()<0 || position_lion_inter.y()<0 || existe(position_lion_inter, positions)){
            do{
                if(existe(position_lion_inter, positions)){
                    cout << "Position deja prise. "<<endl;
                    cout << "Coordonnees de la position du lion numero " << i+1 << " : " << endl;
                }else{
                    cout << "Coordonnees du lion hors de portee. "<<endl;
                    cout << "Coordonnees de la position du lion numero " << i+1 << " : " << endl;
                }
                position_lion_inter.read(cin);
            }while(position_lion_inter.x()>=lignes || position_lion_inter.y()>=colonnes || position_lion_inter.x()<0 || position_lion_inter.y()<0 || existe(position_lion_inter, positions));
        }
        positions.push_back(position_lion_inter);
        positions_lions.push_back(position_lion_inter);
    }

    cout << endl;

    int nombre_fauves;
    do{
       cout << "Nombre de fauves sur le terrain : " << endl;
       cin >> nombre_fauves;
    }while(nombre_fauves<=0);

    vector<point> positions_fauves;
    point position_fauve_inter;
    for(int i=0; i<nombre_fauves; ++i){
        cout << "Coordonnees de la position du fauve numero " << i+1 << " : " << endl;
        position_fauve_inter.read(cin);
        if(position_fauve_inter.x()>=lignes || position_fauve_inter.y()>=colonnes || position_fauve_inter.x()<0 || position_fauve_inter.y()<0 || existe(position_fauve_inter, positions)){
            do{
                if(existe(position_fauve_inter, positions)){
                    cout << "Position deja prise. "<<endl;
                    cout << "Coordonnees de la position du fauve numero " << i+1 << " : " << endl;
                }else{
                    cout << "Coordonnees du fauve hors de portee. "<<endl;
                    cout << "Coordonnees de la position du fauve numero " << i+1 << " : " << endl;
                }
                position_fauve_inter.read(cin);
            }while(position_fauve_inter.x()>=lignes || position_fauve_inter.y()>=colonnes || position_fauve_inter.x()<0 || position_fauve_inter.y()<0 || existe(position_fauve_inter, positions));
        }
        positions.push_back(position_fauve_inter);
        positions_fauves.push_back(position_fauve_inter);
    }

    cout << endl;

    int nombre_arbres;
    do{
       cout << "Nombre d'arbres sur le terrain : " << endl;
       cin >> nombre_arbres;
    }while(nombre_arbres<0);

    vector<point> positions_arbres;
    point position_arbre_inter;
    for(int i=0; i<nombre_arbres; ++i){
        cout << "Coordonnees de la position de l'arbre numero " << i+1 << " : " << endl;
        position_arbre_inter.read(cin);
        if(position_arbre_inter.x()>=lignes || position_arbre_inter.y()>=colonnes || position_arbre_inter.x()<0 || position_arbre_inter.y()<0 || existe(position_arbre_inter, positions)){
            do{
                if(existe(position_arbre_inter, positions)){
                    cout << "Position deja prise. "<<endl;
                    cout << "Coordonnees de la position de l'arbre numero " << i+1 << " : " << endl;
                }else{
                    cout << "Coordonnees de l'arbre hors de portee. "<<endl;
                    cout << "Coordonnees de la position de l'arbre numero " << i+1 << " : " << endl;
                }
                position_arbre_inter.read(cin);
            }while(position_arbre_inter.x()>=lignes || position_arbre_inter.y()>=colonnes || position_arbre_inter.x()<0 || position_arbre_inter.y()<0 || existe(position_arbre_inter, positions));
        }
        positions.push_back(position_arbre_inter);
        positions_arbres.push_back(position_arbre_inter);
    }

    cout << endl;

    int nombre_pieges;
    do{
       cout << "Nombre de pieges sur le terrain : " << endl;
       cin >> nombre_pieges;
    }while(nombre_pieges<0);

    vector<point> positions_pieges;
    point position_piege_inter;
    for(int i=0; i<nombre_pieges; ++i){
        cout << "Coordonnees de la position de l'arbre numero " << i+1 << " : " << endl;
        position_piege_inter.read(cin);
        if(position_piege_inter.x()>=lignes || position_piege_inter.y()>=colonnes || position_piege_inter.x()<0 || position_piege_inter.y()<0 || existe(position_piege_inter, positions)){
            do{
                if(existe(position_piege_inter, positions)){
                    cout << "Position deja prise. "<<endl;
                    cout << "Coordonnees de la position du piege numero " << i+1 << " : " << endl;
                }else{
                    cout << "Coordonnees de l'arbre hors de portee. "<<endl;
                    cout << "Coordonnees de la position du piege numero " << i+1 << " : " << endl;
                }
                position_piege_inter.read(cin);
            }while(position_piege_inter.x()>=lignes || position_piege_inter.y()>=colonnes || position_piege_inter.x()<0 || position_piege_inter.y()<0 || existe(position_piege_inter, positions));
        }
        positions.push_back(position_piege_inter);
        positions_pieges.push_back(position_piege_inter);
    }

    fstream myFile;
    myFile.open("terrains.txt", ios::app);
    if(myFile.is_open()){
        myFile << "Nom du terrain : " << nom_terrain << "\n";
        myFile << "Nombre de lignes : " << lignes << "\n";
        myFile << "Nombre de colonnes : " << colonnes << "\n";
        myFile << "Position du joueur : " << '(' <<position_joueur.x() << ',' << position_joueur.y() << ')' << "\n";
        myFile << "Position(s) des lion(s) : ";
        for(const point& position_lion:positions_lions){
            myFile << '(' <<position_lion.x() << ',' << position_lion.y() << ')' << " ";
        }
        myFile << "\n";

        myFile << "Position(s) des fauve(s) : ";
        for(const point& position_fauve:positions_fauves){
            myFile << '(' <<position_fauve.x() << ',' << position_fauve.y() << ')' << " ";
        }
        myFile << "\n";

        myFile << "Position(s) des arbre(s) : ";
        if(positions_arbres.size() == 0){
            myFile << "none";
            myFile << "\n";
        }else{
            for(const point& position_arbre:positions_arbres){
                myFile << '(' <<position_arbre.x() << ',' << position_arbre.y() << ')' << " ";
            }
            myFile << "\n";
        }

        myFile << "Position(s) des piege(s) : ";
        if(positions_pieges.size() == 0){
            myFile << "none";
            myFile << "\n";
        }else{
            for(const point& position_piege:positions_pieges){
                myFile << '(' <<position_piege.x() << ',' << position_piege.y() << ')' << " ";
            }
            myFile << "\n";
        }

        myFile << "\n";
        myFile << "-";
        myFile << "\n";

        myFile.close();
    }



}

template<typename Out>
void split(const std::string &s, char delim, Out result) {
	std::stringstream ss;
	ss.str(s);
	std::string item;
	while (std::getline(ss, item, delim)) {
		*(result++) = item;
	}
}

std::vector<std::string> split(const std::string &s, char delim) {
	std::vector<std::string> elems;
	split(s, delim, std::back_inserter(elems));
	return elems;
}

void terrain::chargerTerrain(){
    fstream myFile;
    myFile.open("terrains.txt", ios::in);
    string text = "";
    if(myFile.is_open()){
        string line;
        while(getline(myFile,line)){
            text += line;
            text += "\n";
        }
        myFile.close();
    }

    vector<string> terrains = split(text, '-');

   if(terrains.size() == 0){
        cout<<"Aucun terrain existent.";
   }else{
        terrains.pop_back();
        vector<vector<string>> terrains_parsed;

        for(int i = 0; i < terrains.size(); ++i){
            vector<string> lignes = split(terrains[i], '\n');
            vector<string> terrain_parsed;
            lignes.pop_back();
            for(int j = 0; j < lignes.size(); ++j){
                vector<string> tab_lignes = split(lignes[j], ':');
                if(tab_lignes.size() > 0){
                    tab_lignes[1].erase(0,1);
                    terrain_parsed.push_back(tab_lignes[1]);
                }
            }
            terrains_parsed.push_back(terrain_parsed);
        }

        int choix;

        do{
           cout << "Quel terrain voulez vous choisir ? Tapez le numero du terrain." << endl;
            for(int i = 0; i<terrains_parsed.size(); ++i){
                cout << i+1 << "/" << terrains_parsed[i][0] <<"\t";
            }
            cout << endl;
            cin >> choix;
        }while(choix < 1 || choix>terrains_parsed.size());

        cout << choix;


   }
}

