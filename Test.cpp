#include "sources/Fraction.hpp"
#include "doctest.h"
 using namespace ariel;

  Fraction f1(2,3);
  Fraction f2(1,4);
  Fraction f3(3,4);

 TEST_CASE("constructor Fraction")
 {
    CHECK(f1.getNumerator() == 2);
    CHECK(f1.getDenominator() == 3);
    CHECK(f2.getNumerator() == 1);
    CHECK(f2.getDenominator() == 4);
    CHECK_THROWS(Fraction(2,0));
 }


 TEST_CASE("Basic Arithmetic")
{
    CHECK((f2+f3) == Fraction(4,4));
    CHECK((f3-f2) == Fraction(2,4));
    CHECK((f1*f3) == Fraction(3,16));
    CHECK((f3/f1) == Fraction(9,8));
    CHECK((f2+0.25) == Fraction(2,4));
    CHECK((1.0-f1) == Fraction(1,3));
    CHECK_THROWS(f1/0);
}

TEST_CASE("boolean operators")
{
    CHECK((f3 > f2) == true);
    CHECK((f1 < f3) == true);
    CHECK((f2 <= f3) == true);
    CHECK((f2 >= f1) == false);
    CHECK((f2 == 0.25) == true);
    CHECK((f3 > 1.0) == false);
    CHECK((0.33 < f1) == true);
}

TEST_CASE("increasing and decreasing by one")
{
    Fraction f4(6,4);
    CHECK(f1++ == Fraction(5,3));
    CHECK(++f1 == Fraction(5,3));
    CHECK(f4-- == Fraction(2,4));
    CHECK(--f4 == Fraction(2,4));
}
