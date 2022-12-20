#include "doctest.h"
#include "position.h"
#include <sstream>
#include <string>

using std::to_string;
void testEGALITE(const position& a, int ValVerifX, int ValVerifY)
{
    REQUIRE(a.x()==ValVerifX);
    REQUIRE(a.y()==ValVerifY);

}

TEST_CASE("La position est bien créer")
{

    SUBCASE("La position pâr defaut est correcte")
    {
        position a  = position();
        testEGALITE(a,0,0);
    }

    SUBCASE ("La position est bien créer par paramètre")
    {
        position a = position( 1, 2);
        testEGALITE(a,1,2);

    }
}

TEST_CASE ("La récuperation des données sont bonne")
{
    position a= position();
    SUBCASE("La récuperation de données ")
    {

        testEGALITE(a,0,0);

    }
    SUBCASE (" Les coordonées de la position sont bien changer")
    {

        a.setx(4);
        a.sety(4);
        testEGALITE(a,4,4);
    }
}

