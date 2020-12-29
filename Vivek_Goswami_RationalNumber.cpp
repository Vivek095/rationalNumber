#include <iostream>
#include "Vivek_Goswami_RationalNumber.h"
using namespace std;

RationalNumber::RationalNumber()
{
 numerator=0;
 denominator=1;
}

RationalNumber::RationalNumber(int n,int d)
{
 int GCD=0;
 if(d>0)
 {
  GCD=gcd(n,d);
  numerator=n/GCD;
  denominator=d/GCD;
 }
}

void RationalNumber::printRational()
{
 int GCD=0;
 GCD=gcd(numerator,denominator);
 if(GCD>1)
 {
  numerator=numerator/GCD;
  denominator=denominator/GCD;
 }
 cout << numerator;
 if(denominator!=1)
 {
  cout << "/" << denominator;
 }
}

RationalNumber operator+(const RationalNumber &r1, const RationalNumber &r2) //friend function
{
    RationalNumber result;
    if(r1.denominator==r2.denominator)
    {
     result.numerator=r1.numerator+r2.numerator;
     result.denominator=r1.denominator;
    }
    else
    {
     result.numerator=(r1.numerator*r2.denominator)+(r1.denominator*r2.numerator);
     result.denominator=r1.denominator*r2.denominator;
    }
    return result;
}

RationalNumber operator-(const RationalNumber &r1, const RationalNumber &r2) //friend function
{
    RationalNumber result;
    if(r1.denominator==r2.denominator)
    {
     result.numerator=r1.numerator-r2.numerator;
     result.denominator=r1.denominator;
    }
    else
    {
     result.numerator=(r1.numerator*r2.denominator)-(r1.denominator*r2.numerator);
     result.denominator=r1.denominator*r2.denominator;
    }
    return result;
}

RationalNumber operator*(const RationalNumber &r1, const RationalNumber &r2) //friend function
{
    RationalNumber result;
    result.numerator=r1.numerator*r2.numerator;
    result.denominator=r1.denominator*r2.denominator;
    return result;
}

RationalNumber operator/(const RationalNumber &r1, const RationalNumber &r2) //friend function
{
     RationalNumber result;
     result.numerator=r1.numerator*r2.denominator;
     result.denominator=r1.denominator*r2.numerator;
    return result;
}

const RationalNumber& RationalNumber::operator=(const RationalNumber &r)
{
	numerator= r.numerator;
	denominator= r.denominator;
    return *this;

}

bool operator>(const RationalNumber &r1, const RationalNumber &r2) //friend function
{
  double r1Result=0;
  double r2Result=0;
  r1Result=r1.numerator/(double)r1.denominator;
  r2Result=r2.numerator/(double)r2.denominator;
  if(r1Result>r2Result)
  {
   return true;
  }
  else
  {
   return false;
  }
}

bool operator<(const RationalNumber &r1, const RationalNumber &r2) //friend function
{
  double r1Result=0;
  double r2Result=0;
  r1Result=r1.numerator/(double)r1.denominator;
  r2Result=r2.numerator/(double)r2.denominator;

  if(r1Result<r2Result)
  {
   return true;
  }
  else
  {
   return false;
  }
}

bool operator>=(const RationalNumber &r1, const RationalNumber &r2) //friend function
{
  double r1Result=0;
  double r2Result=0;
  r1Result=r1.numerator/(double)r1.denominator;
  r2Result=r2.numerator/(double)r2.denominator;
  if(r1Result>=r2Result)
  {
   return true;
  }
  else
  {
   return false;
  }
}

bool operator<=(const RationalNumber &r1, const RationalNumber &r2) //friend function
{
  double r1Result=0;
  double r2Result=0;
  r1Result=r1.numerator/(double)r1.denominator;
  r2Result=r2.numerator/(double)r2.denominator;
  if(r1Result<=r2Result)
  {
   return true;
  }
  else
  {
   return false;
  }
}

bool operator==(const RationalNumber &r1, const RationalNumber &r2) //friend function
{
  double r1Result=0;
  double r2Result=0;
  r1Result=r1.numerator/(double)r1.denominator;
  r2Result=r2.numerator/(double)r2.denominator;
  if(r1Result==r2Result)
  {
   return true;
  }
  else
  {
   return false;
  }
}

bool operator!=(const RationalNumber &r1, const RationalNumber &r2) //friend function
{
  double r1Result=0;
  double r2Result=0;
  r1Result=r1.numerator/(double)r1.denominator;
  r2Result=r2.numerator/(double)r2.denominator;
  if(r1Result!=r2Result)
  {
   return true;
  }
  else
  {
   return false;
  }
}

int RationalNumber::gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
