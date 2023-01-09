#include "doctest.h"
#include "lion.h"

TEST_CASE("Teste de la classe 'Lion'") {
    int x = 1;
    int y = 1;
    Lion l {x,y};

    SUBCASE("Teste de la fonction deplacerN()"){
        l.deplacerN();
        REQUIRE_EQ(l.pos().x(), x - 1);
        REQUIRE_EQ(l.pos().y(), y);
    }

    SUBCASE("Teste de la fonction deplacerS()"){
        l.deplacerS();
        REQUIRE_EQ(l.pos().x(), x + 1);
        REQUIRE_EQ(l.pos().y(), y);
    }

    SUBCASE("Teste de la fonction deplacerE()"){
        l.deplacerE();
        REQUIRE_EQ(l.pos().x(), x);
        REQUIRE_EQ(l.pos().y(), y + 1);
    }

    SUBCASE("Teste de la fonction deplacerW()"){
        l.deplacerW();
        REQUIRE_EQ(l.pos().x(), x);
        REQUIRE_EQ(l.pos().y(), y - 1);
    }

    SUBCASE("Teste de la fonction type()"){
        char entityChar = l.type();
        REQUIRE_EQ(entityChar, 'L');
    }
}
