#include "doctest.h"
#include "expert.h"

TEST_CASE("Teste de la classe 'Expert'"){
    int x = 1;
    int y = 1;
    Expert e {x,y};

    SUBCASE("Teste de la fonction deplacerN()"){
        e.deplacerN();
        REQUIRE_EQ(e.pos().x(), x - 1);
        REQUIRE_EQ(e.pos().y(), y);
    }

    SUBCASE("Teste de la fonction deplacerS()"){
        e.deplacerS();
        REQUIRE_EQ(e.pos().x(), x + 1);
        REQUIRE_EQ(e.pos().y(), y);
    }

    SUBCASE("Teste de la fonction deplacerE()"){
        e.deplacerE();
        REQUIRE_EQ(e.pos().x(), x);
        REQUIRE_EQ(e.pos().y(), y + 1);
    }

    SUBCASE("Teste de la fonction deplacerW()"){
        e.deplacerW();
        REQUIRE_EQ(e.pos().x(), x);
        REQUIRE_EQ(e.pos().y(), y - 1);
    }

    SUBCASE("Teste de la fonction type()"){
        char entityChar = e.type();
        REQUIRE_EQ(entityChar, 'E');
    }
}
