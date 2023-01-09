#include "doctest.h"
#include "classic.h"

TEST_CASE("Teste de la classe 'Classic'") {
    int x = 1;
    int y = 1;
    Classic c {x,y};

    SUBCASE("Teste de la fonction deplacerN()"){
        c.deplacerN();
        REQUIRE_EQ(c.pos().x(), x - 1);
        REQUIRE_EQ(c.pos().y(), y);
    }

    SUBCASE("Teste de la fonction deplacerS()"){
        c.deplacerS();
        REQUIRE_EQ(c.pos().x(), x + 1);
        REQUIRE_EQ(c.pos().y(), y);
    }

    SUBCASE("Teste de la fonction deplacerE()"){
        c.deplacerE();
        REQUIRE_EQ(c.pos().x(), x);
        REQUIRE_EQ(c.pos().y(), y + 1);
    }

    SUBCASE("Teste de la fonction deplacerW()"){
        c.deplacerW();
        REQUIRE_EQ(c.pos().x(), x);
        REQUIRE_EQ(c.pos().y(), y - 1);
    }

    SUBCASE("Teste de la fonction deplacerNE()"){
        c.deplacerNE();
        REQUIRE_EQ(c.pos().x(), x - 1);
        REQUIRE_EQ(c.pos().y(), y + 1);
    }

    SUBCASE("Teste de la fonction deplacerNW()"){
        c.deplacerNW();
        REQUIRE_EQ(c.pos().x(), x - 1);
        REQUIRE_EQ(c.pos().y(), y - 1);
    }

    SUBCASE("Teste de la fonction deplacerSE()"){
        c.deplacerSE();
        REQUIRE_EQ(c.pos().x(), x + 1);
        REQUIRE_EQ(c.pos().y(), y + 1);
    }

    SUBCASE("Teste de la fonction deplacerSW()"){
        c.deplacerSW();
        REQUIRE_EQ(c.pos().x(), x + 1);
        REQUIRE_EQ(c.pos().y(), y - 1);
    }

    SUBCASE("Teste de la fonction type()"){
        char entityChar = c.type();
        REQUIRE_EQ(entityChar, 'C');
    }
}
