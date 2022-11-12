#include<iostream>
#include<cmath>
#include<vector>
#include<memory>
#include<string>
#include"terrain.h"


using namespace std;

int main()
{
    terrain t {3,3};

    cout<<"val : "<<t.tableau()[0][0]<<endl;
    return 0;
}
