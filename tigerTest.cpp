#include "doctest.h"
#include "tiger.h"

TEST_CASE("Teste de la classe 'Tiger'") {
    int x = 1;
    int y = 1;
    Tiger t {x,y};

    SUBCASE("Teste de la fonction deplacerN()"){
        t.deplacerN();
        REQUIRE_EQ(t.pos().x(), x - 1);
        REQUIRE_EQ(t.pos().y(), y);
    }

    SUBCASE("Teste de la fonction deplacerS()"){
        t.deplacerS();
        REQUIRE_EQ(t.pos().x(), x + 1);
        REQUIRE_EQ(t.pos().y(), y);
    }

    SUBCASE("Teste de la fonction deplacerE()"){
        t.deplacerE();
        REQUIRE_EQ(t.pos().x(), x);
        REQUIRE_EQ(t.pos().y(), y + 1);
    }

    SUBCASE("Teste de la fonction deplacerW()"){
        t.deplacerW();
        REQUIRE_EQ(t.pos().x(), x);
        REQUIRE_EQ(t.pos().y(), y - 1);
    }

    SUBCASE("Teste de la fonction deplacerNE()"){
        t.deplacerNE();
        REQUIRE_EQ(t.pos().x(), x - 1);
        REQUIRE_EQ(t.pos().y(), y + 1);
    }

    SUBCASE("Teste de la fonction deplacerNW()"){
        t.deplacerNW();
        REQUIRE_EQ(t.pos().x(), x - 1);
        REQUIRE_EQ(t.pos().y(), y - 1);
    }

    SUBCASE("Teste de la fonction deplacerSE()"){
        t.deplacerSE();
        REQUIRE_EQ(t.pos().x(), x + 1);
        REQUIRE_EQ(t.pos().y(), y + 1);
    }

    SUBCASE("Teste de la fonction deplacerSW()"){
        t.deplacerSW();
        REQUIRE_EQ(t.pos().x(), x + 1);
        REQUIRE_EQ(t.pos().y(), y - 1);
    }

    SUBCASE("Teste de la fonction type()"){
        char entityChar = t.type();
        REQUIRE_EQ(entityChar, 'T');
    }
}
