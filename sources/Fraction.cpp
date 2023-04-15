#include <iostream>
#include "Fraction.hpp"


using namespace std;
using namespace ariel;
namespace ariel{

Fraction::Fraction(int numerator, int denominator){
this->numerator = numerator;
this->denominator = denominator;
}
Fraction::Fraction(){
this->numerator = 0;
this->denominator = 1;
}

Fraction getNumerator(){
    this->numerator;
}
void setNumerator(float n){
   this->numerator = n;
}
Fraction getDenominator(){
    this->denominator;
}
void setDenominator(float n){
    if(n == 0){
        throw std::invalid_argument("Denominator must be different from 0");
    }
    this->denominator = n;
}

// The + operator to add two fractions and return their sum as another fraction in reduced form.
Fraction Fraction::operator+(const Fraction& other) const {
    int mone = numerator * other.denominator + other.numerator * denominator;
    int mehane = denominator * other.denominator;
    return Fraction(mone, mehane);
}
Fraction Fraction::operator+(const float other) const{
    return;

}

// The - operator to subtract two fractions and return their difference as another fraction in reduced form.
Fraction Fraction::operator-(const Fraction& other) const{
    int mone = numerator * other.denominator - other.numerator * denominator;
    int mehane = denominator * other.denominator;
    return Fraction(mone, mehane);
}
Fraction Fraction::operator-(const float other) const{
    return;
}

// The * operator to multiply two fractions and return their product as another fraction in reduced form.
Fraction Fraction::operator*(const Fraction& other) const{
    int mone = this->numerator * other.numerator;
    int mehane = this->denominator * other.denominator;
    return Fraction(mone, mehane);
}
Fraction Fraction::operator*(const float other) const {
    // double result = static_cast<double>(numerator) / denominator * other;
    // int gcd = __gcd(static_cast<int>(result * denominator), denominator);
    // return Fraction(static_cast<int>(result * denominator / gcd), denominator / gcd);
    // int newNumerator = static_cast<int>(other * this->numerator );
    // return Fraction(newNumerator, denominator);
    return;
}

// The / operator to divide two fractions and return their quotient as another fraction in reduced form.
Fractionble Fraction::operator/(const Fraction& other) const{
    int mone = this->numerator * other.numerator;
    int mehane = this->denominator * other.denominator;
    return Fraction(mone, mehane);

}
Fraction Fraction::operator/(const float other) const{
        return;

}

// The == operator to compare two fractions for equality and return true or false.
bool Fraction::operator==(const Fraction& other) const{
    return;

}
bool Fraction::operator==(const float other) const{
        return;

}

// All comparison operations (>,<,>=,<=)
void Fraction::operator>(const Fraction& other) const{
        return;

}
bool Fraction::operator>(const float other) const{
        return;

}

bool Fraction::operator<(const Fraction& other) const{
    return;

}
bool Fraction::operator<(const float other) const{
        return;

}

bool Fraction::operator>=(const Fraction& other) const{
    return;

}
bool Fraction::operator>=(const float other) const{
        return;

}

bool Fraction::operator<=(const Fraction& other) const{
    return;

}
bool Fraction::operator<=(const float other) const{
        return;

}

// The ++ and -- operator that adds (or substracts) 1 to the fraction. implement both pre and post fix.
Fraction Fraction::operator++(int){
    return;

}
Fraction Fraction::operator++(){
    return;

}

Fraction Fraction::operator--(int){
       return;
 
}
Fraction Fraction::operator--(){
       return;
 
}

The << operator to print a fraction to an output stream in the format “numerator/denominator”.
ostream& operator<<(std::ostream& os, const Fraction& fraction) {
    cout << numerator << "/" << denominator << endl;
}

// std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
//     if (fraction.denominator == 1) {
//         os << fraction.numerator;
//     } else {
//         os << fraction.numerator << "/" << fraction.denominator;
//     }
//     return os;
// }

// std::ostream& operator<<(std::ostream& os, const std::pair<const char*, Fraction>& p) {
//     os << p.first << p.second;
//     return os;
// }

// The >> operator to read a fraction from an input stream by taking two integers as input.
istream& operator>>(std::ostream& os, const Fraction& fraction) {
    input >> numerator >> denominator ;
}
}
