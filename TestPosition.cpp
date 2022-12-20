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

TEST_CASE("La position est bien cr�er")
{

    SUBCASE("La position p�r defaut est correcte")
    {
        position a  = position();
        testEGALITE(a,0,0);
    }

    SUBCASE ("La position est bien cr�er par param�tre")
    {
        position a = position( 1, 2);
        testEGALITE(a,1,2);

    }
}

TEST_CASE ("La r�cuperation des donn�es sont bonne")
{
    position a= position();
    SUBCASE("La r�cuperation de donn�es ")
    {

        testEGALITE(a,0,0);

    }
    SUBCASE (" Les coordon�es de la position sont bien changer")
    {

        a.setx(4);
        a.sety(4);
        testEGALITE(a,4,4);
    }
}

