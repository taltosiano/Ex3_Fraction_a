#include <iostream>
#include <numeric>
#include "Fraction.hpp"


using namespace std;
using namespace ariel;
namespace ariel{

Fraction::Fraction(int numerator, int denominator){
    this->numerator = numerator;
    this->denominator = denominator;
}

Fraction f1(0,1);

int Fraction::getNumerator() const{
    return this->numerator;
}
void Fraction::setNumerator(int n){
   this->numerator = n;
}
int Fraction::getDenominator() const{
    return this->denominator;
}
void Fraction::setDenominator(int n){
    if(n == 0){
        throw invalid_argument("Denominator must be different from 0");
    }
    this->denominator = n;
}

// The + operator to add two fractions and return their sum as another fraction in reduced form.
Fraction Fraction::operator+(const Fraction& other){
    return f1;
}
Fraction Fraction::operator+(float other){
    return f1;
}
Fraction operator+(float f, Fraction& other){          //friend 
    return f1;
}

// The - operator to subtract two fractions and return their difference as another fraction in reduced form.
Fraction Fraction::operator-(const Fraction& other){
    return f1;
}
Fraction Fraction::operator-(float other){
    return f1;
}
Fraction operator-(float f, Fraction& other){          //friend 
    return f1;
}

// The * operator to multiply two fractions and return their product as another fraction in reduced form.
Fraction Fraction::operator*(const Fraction& other){
   return f1;
}
Fraction Fraction::operator*(float other){
   return f1;
}
Fraction operator*(float f, Fraction& other){          //friend 
    return f1;
}

// The / operator to divide two fractions and return their quotient as another fraction in reduced form.
Fraction Fraction::operator/(const Fraction& other){
    return f1;

}
Fraction Fraction::operator/(float other){
    return f1;

}
Fraction operator/(float f, Fraction& other){          //friend 
    return f1;
}

// The == operator to compare two fractions for equality and return true or false.
bool Fraction::operator==(const Fraction& other){
    return true;
}
bool Fraction::operator==(float other){
    return true;

}
bool operator==(float f, Fraction& other){          //friend 
    return true;
}

// All comparison operations (>,<,>=,<=)
bool Fraction::operator>(const Fraction& other){
    return true;

}
bool Fraction::operator>(float other){
    return true;

}
bool operator>(float f, Fraction& other){          //friend 
    return true;
}

bool Fraction::operator<(const Fraction& other){
    return true;

}
bool Fraction::operator<(float other){
    return true;

}
bool operator<(float f, Fraction& other){          //friend 
    return true;
}

bool Fraction::operator>=(const Fraction& other){
    return true;

}
bool Fraction::operator>=(float other){
        return true;

}
bool operator>=(float f, Fraction& other){          //friend 
    return true;
}

bool Fraction::operator<=(const Fraction& other){
    return true;

}
bool Fraction::operator<=(float other){
        return true;

}
bool operator<=(float f, Fraction& other){          //friend 
    return true;
}

// The ++ and -- operator that adds (or substracts) 1 to the fraction. implement both pre and post fix.
Fraction Fraction::operator++(int) {
    return f1;
}
Fraction &Fraction::operator++() {
    return f1;

}

Fraction Fraction::operator--(int){
       return f1;
 
}
Fraction Fraction::operator--(){
       return f1;
 
}

// The << operator to print a fraction to an output stream in the format “numerator/denominator”.
ostream& operator<<(std::ostream& os, const Fraction& fraction) {
    return os;

}

// The >> operator to read a fraction from an input stream by taking two integers as input.
istream& operator>>(std::istream& is, Fraction& fraction) {
    return is;
    
}
}
