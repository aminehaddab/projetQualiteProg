#include<iostream>
#include<cmath>
#include<vector>
#include<memory>
#include<string>
#include"terrain.h"


using namespace std;

int main()
{
    terrain t {10,13};
    //cout << t.d_tableau[0].size();
    t.afficherTerrain();
    return 0;
}
