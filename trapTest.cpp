#include "doctest.h"
#include "trap.h"

TEST_CASE("Teste de la classe 'Trap'"){
    int x = 1;
    int y = 1;
    int capacite = 3;
    Trap t {x,y,capacite};

    SUBCASE("Teste de la fonction decrCapacite()"){
        t.decrCapacite();
        REQUIRE_EQ(t.capacite(), capacite - 1);
    }
}
