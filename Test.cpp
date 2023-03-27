#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

#include "doctest.h"
#include <iostream>
#include <string>

using namespace ariel;
using namespace std;


TEST_CASE("Check Card's constructor"){
    CHECK_NOTHROW(Card c1(2, "Hearts"));
    CHECK_NOTHROW(Card c2(5, "Diamonds"));
    CHECK_NOTHROW(Card c3(10, "Clovers"));
    CHECK_NOTHROW(Card c4(11, "Pikes"));

}

TEST_CASE("Check Card's Functions"){

    Card c1(2, "Hearts");
    Card c2(5, "Diamonds");
    Card c3(10, "Clovers");
    Card c4(11, "Pikes");

    CHECK(c4.compareTo(c4) == 0);
    CHECK(c1.compareTo(c1) == 0);
    CHECK(c2.compareTo(c2) == 0);
    CHECK(c3.compareTo(c3) == 0);
}

TEST_CASE("Check Player's constructor"){

    CHECK_NOTHROW(Player p1("Alice"));
    CHECK_NOTHROW(Player p1("Bob"));

    Player p1("Alice");
    Player p2("Bob");

    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);
    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);

}

TEST_CASE("Check Player's Functions"){

    Player p1("Alice");
    Player p2("Bob");

    CHECK(p1.getName() == "Alice");    
    CHECK(p2.getName() == "Bob");
}

TEST_CASE("Check Game's constructor"){

    Player p1("Alice");
    Player p2("Bob");

    CHECK_NOTHROW(Game game(p1,p2));
    
}

TEST_CASE("Check Game's Functions"){

    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2);

    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());
}
