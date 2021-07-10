/*******************************************************************
   Hamed Mirzaei
   telegram  ID --> @HamedMirzaei_Official
   instagram ID --> HamedMirzaei2001Official
   email --> HamedMirzaei2001Official@gmail.com
********************************************************************/

#include "Rational.h"
#include<iostream>
#include<stdexcept>
using namespace std;

/**********************************************************************
finds and returns greatest common divisor
**********************************************************************/
int Rational::GCD(int x, int y)
{
    if(y == 0)
        return x;
    else
        return GCD(y, x%y);
}
/*****************************************************************************
This is the constructor for class Rational
*****************************************************************************/
Rational::Rational(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator =  denominator;
}
/*****************************************************************************
This is the function for simplify the Rational number to its smallest form
*****************************************************************************/
Rational Rational::Reduce()
{

    int G = GCD(this->numerator, this->denominator);
    this->numerator /= G;
    this->denominator /= G;
     if(denominator < 0)   //fixes negative denominator
    {
        this->numerator *= -1;
        this->denominator *= -1;
    }
    return *this;
}
/*****************************************************************************
This is the function for overloading the << operator for class Rational
*****************************************************************************/
ostream& operator << (ostream& output, const Rational& R)
{
    if(R.denominator == 1)
        output<<R.numerator;  //like 4/1 ---> 4
    else
        output<<R.numerator<<"/"<<R.denominator;

    return output;
}
/*****************************************************************************
This is the function for overloading the >> operator for class Rational
*****************************************************************************/
istream& operator >> (istream& input, Rational& R)
{
    input>>R.numerator;
    input.ignore(); //skip /
    input>>R.denominator;
    if(R.denominator == 0)
        throw invalid_argument("denominator must not be 0 !!!");
    input.ignore(); //skip discriminant for example Enter or Space
    R.Reduce();
    return input;
}

/*****************************************************************************
This is the function for overloading the + operator for class Rational
*****************************************************************************/
Rational Rational::operator+ (const Rational& R)
{
    this->numerator = this->numerator * R.denominator + this->denominator * R.numerator;
    this->denominator = this->denominator * R.denominator;
    return (*this).Reduce();
}
/*****************************************************************************
This is the function for overloading the - operator for class Rational
*****************************************************************************/
Rational Rational::operator- (const Rational& R)
{
    this->numerator = this->numerator * R.denominator - this->denominator * R.numerator;
    this->denominator = this->denominator * R.denominator;
    return (*this).Reduce();
}
/*****************************************************************************
This is the function for overloading the * operator for class Rational
*****************************************************************************/
Rational Rational::operator* (const Rational& R)
{
    this->numerator = this->numerator * R.numerator;
    this->denominator = this->denominator * R.denominator;
    return (*this).Reduce();
}
/*****************************************************************************
This is the function for overloading the / operator for class Rational
*****************************************************************************/
Rational Rational::operator/ (const Rational& R)
{
    this->numerator = this->numerator * R.denominator;
    this->denominator = this->denominator * R.numerator;
    return (*this).Reduce();
}
/*****************************************************************************
This is the function for overloading the += operator for class Rational
*****************************************************************************/
Rational Rational::operator+= (const Rational& R)
{
    this->numerator = this->numerator * R.denominator + this->denominator * R.numerator;
    this->denominator = this->denominator * R.denominator;
    return (*this).Reduce();
}
/*****************************************************************************
This is the function for overloading the -= operator for class Rational
*****************************************************************************/
Rational Rational::operator-= (const Rational& R)
{
    this->numerator = this->numerator * R.denominator - this->denominator * R.numerator;
    this->denominator = this->denominator * R.denominator;
    return (*this).Reduce();
}
/*****************************************************************************
This is the function for overloading the *= operator for class Rational
*****************************************************************************/
Rational Rational::operator*= (const Rational& R)
{
    this->numerator = this->numerator * R.numerator;
    this->denominator = this->denominator * R.denominator;
    return (*this).Reduce();
}
/*****************************************************************************
This is the function for overloading the /= operator for class Rational
*****************************************************************************/
Rational Rational::operator/= (const Rational& R)
{
    this->numerator = this->numerator * R.denominator;
    this->denominator = this->denominator * R.numerator;
    return (*this).Reduce();
}
/*****************************************************************************
This is the function for overloading the postfix ++ operator for class Rational
*****************************************************************************/
Rational Rational::operator++ (int) //postfix ++
{
    this->numerator++;
    this->denominator++;
    return *this;
}
/*****************************************************************************
This is the function for overloading the postfix ++ operator for class Rational
*****************************************************************************/
Rational Rational::operator++ () //prefix ++
{
    this->numerator++;
    this->denominator++;
    return *this;
}

/*****************************************************************************
This is the function for overloading the prefix -- operator for class Rational
*****************************************************************************/
Rational Rational::operator-- (int) //postfix --
{
    this->numerator--;
    this->denominator--;
    return *this;
}
/*****************************************************************************
This is the function for overloading the prefix -- operator for class Rational
*****************************************************************************/
Rational Rational::operator--() //prefix --
{
    this->numerator--;
    this->denominator--;
    return *this;
}

/*****************************************************************************
This is the function for overloading pow for class Rational
*****************************************************************************/
Rational Rational::pow(unsigned p)const
{
    Rational result(*this);
    Rational temp(*this);
    if( p == 0 )
        result = 1;
    else
        for(unsigned i=1; i<p; i++)
        {
            result *= temp;
        }

    return result;
}
/*****************************************************************************
This is the function for overloading the inverse for class Rational
*****************************************************************************/
Rational Rational::inverse()const
{
    Rational result(this->denominator, this->numerator);
    return result;
}
/*****************************************************************************
This is the function for overloading the == operator for class Rational
*****************************************************************************/
bool Rational::operator== (const Rational& R)
{
    if( (float)this->numerator / this->denominator == (float)R.numerator / R.denominator )
        return true;
    else
        return false;
}
/*****************************************************************************
This is the function for overloading the != operator for class Rational
*****************************************************************************/
bool Rational::operator!= (const Rational& R)
{
    if( (float)this->numerator / this->denominator != (float)R.numerator / R.denominator )
        return true;
    else
        return false;
}
/*****************************************************************************
This is the function for overloading the > operator for class Rational
*****************************************************************************/
bool Rational::operator> (const Rational& R)
{
    if( (float)this->numerator / this->denominator > (float)R.numerator / R.denominator )
        return true;
    else
        return false;
}
/*****************************************************************************
This is the function for overloading the < operator for class Rational
*****************************************************************************/
bool Rational::operator< (const Rational& R)
{
    if( (float)this->numerator / this->denominator < (float)R.numerator / R.denominator )
        return true;
    else
        return false;
}
/*****************************************************************************
This is the function for overloading the >= operator for class Rational
*****************************************************************************/
bool Rational::operator>= (const Rational& R)
{
    if( (float)this->numerator / this->denominator >= (float)R.numerator / R.denominator )
        return true;
    else
        return false;
}
/*****************************************************************************
This is the function for overloading the <= operator for class Rational
*****************************************************************************/
bool Rational::operator<= (const Rational& R)
{
    if( (float)this->numerator / this->denominator <= (float)R.numerator / R.denominator )
        return true;
    else
        return false;
}
