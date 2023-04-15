#include "sources/Fraction.hpp"
#include "doctest.h"
 using namespace ariel;

 TEST_CASE("operator+"){

    Fraction f1(2,3);
    Fraction f2(1,4);

    CHECK_EQ(f1.getNumerator, 2);
    CHECK_EQ(f1.getDenominator, 2);
    CHECK_EQ(f2.getNumerator, 1);
    CHECK_EQ(f2.getDenominator, 4);

    CHECK_THROW(f1.setDenominator(0));

  // before the cards are dealt
    CHECK(p1.stacksize() == 0);   
    CHECK(p2.stacksize() == 0);
    CHECK(p1.stacksize() == p2.stacksize());
    CHECK(p1.stacksize() + p2.stacksize() == 0);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);


   // the game is begine so each player have 26 cards
    Game game(p1, p2);
    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.stacksize() == p2.stacksize());
    CHECK(p1.stacksize() + p2.stacksize() == 52);

 }


 TEST_CASE("operator-"){
 
   Player p1("Tal");
   Player p2("Asaf");
   Game game(p1, p2);

   CHECK_NOTHROW(game.playTurn());   //we check there is no error in this operation
   CHECK(p1.stacksize() < 26);       // and that there is lower num of cards
   CHECK(p2.stacksize() < 26);

    for (int i=0;i<10;i++)      // play 10 turns
    {
        game.playTurn();
    }

   CHECK(p1.stacksize() < 16);     
   CHECK(p2.stacksize() < 16);

 }


TEST_CASE("operator*"){

   // create 2 players 
    Player p1("Tal");
    Player p2("Asaf");
    Game game(p1, p2);

    CHECK_NOTHROW(game.playAll()); // play until the end
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());

 TEST_CASE("operator/"){

 }
}