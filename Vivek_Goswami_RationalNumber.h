#include <iostream>
#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

using namespace std;

class RationalNumber
{
friend RationalNumber operator+(const RationalNumber &r1, const RationalNumber &r2);
friend RationalNumber operator-(const RationalNumber &r1, const RationalNumber &r2);
friend RationalNumber operator*(const RationalNumber &r1, const RationalNumber &r2);
friend RationalNumber operator/(const RationalNumber &r1, const RationalNumber &r2);
friend bool operator>(const RationalNumber &r1, const RationalNumber &r2);
friend bool operator<(const RationalNumber &r1, const RationalNumber &r2);
friend bool operator>=(const RationalNumber &r1, const RationalNumber &r2);
friend bool operator<=(const RationalNumber &r1, const RationalNumber &r2);
friend bool operator==(const RationalNumber &r1, const RationalNumber &r2);
friend bool operator!=(const RationalNumber &r1, const RationalNumber &r2);

public:
RationalNumber();
RationalNumber(int,int);
void printRational();
const RationalNumber& operator=(const RationalNumber &r);

private:
int gcd(int a, int b);
int numerator;
int denominator;
};

#endif
