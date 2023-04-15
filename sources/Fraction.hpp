#ifndef FRACTION_H
#define FRACTION_H
#include <stdio.h>
#include <iostream>
using namespace std;

namespace ariel{

class Fraction{
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int numerator, int denominator);

    Fraction getNumerator();
    void setNumerator();
    Fraction getDenominator();
    void setDenominator();

    Fraction operator+(const Fraction& other) const;
    Fraction operator+(const float other) const;

    Fraction operator-(const Fraction& other) const;
    Fraction operator-(const float other) const;

    Fraction operator*(const Fraction& other) const;
    Fraction operator*(const float other) const;

    Fraction operator/(const Fraction& other) const;
    Fraction operator/(const float other) const;

    bool operator==(const Fraction& other) const;
    bool operator==(const float other) const;

    bool operator<(const Fraction& other) const;
    bool operator<(const float other) const;

    bool operator>(const Fraction& other) const;
    bool operator>(const float other) const;

    bool operator<=(const Fraction& other) const;
    bool operator<=(const float other) const;

    bool operator>=(const Fraction& other) const;
    bool operator>=(const float other) const;

    Fraction operator++(int) const;
    Fraction operator++() const;

    Fraction operator--(int) const;
    Fraction operator--() const;

    friend ostream& operator<<(std::ostream& os, const Fraction& other);
    friend istream& operator>>(std::istream& is, Fraction& other);

    friend Fraction operator+(float f, Fraction& other);
    friend Fraction operator-(float f, Fraction& other);
    friend Fraction operator*(float f, Fraction& other);
    friend Fraction operator/(float f, Fraction& other);
    friend bool operator==(float f, Fraction& other);
    friend bool operator>(float f, Fraction& other);
    friend bool operator>=(float f, Fraction& other);
    friend bool operator<(float f, Fraction& other);
    friend bool operator<=(float f, Fraction& other);

};
}
#endif
