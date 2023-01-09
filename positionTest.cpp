#include "doctest.h"
#include "position.h"

TEST_CASE("Teste de la classe 'Position'"){
    int x = 1;
    int y = 2;
    Position p {x,y};

    SUBCASE("Teste de la fonction x()"){
        REQUIRE_EQ(p.x(), x);
    }

    SUBCASE("Teste de la fonction y()"){
        REQUIRE_EQ(p.y(), y);
    }

    SUBCASE("Teste de la fonction deplacer(x,y)"){
        int new_x = 0;
        int new_y = 3;
        p.deplacer(new_x, new_y);
        REQUIRE_EQ(p.x(), new_x);
        REQUIRE_EQ(p.y(), new_y);
    }

    SUBCASE("Teste de la fonction deplacerX(x)"){
        int new_x = 2;
        p.deplacerX(new_x);
        REQUIRE_EQ(p.x(), new_x);
    }

    SUBCASE("Teste de la fonction deplacerY(y)"){
        int new_y = 5;
        p.deplacerY(new_y);
        REQUIRE_EQ(p.y(), new_y);
    }
}
