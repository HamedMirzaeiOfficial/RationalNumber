/*******************************************************************
   Hamed Mirzaei
   telegram  ID --> @HamedMirzaei_Official
   instagram ID --> HamedMirzaeiOfficial
   email --> HamedMirzaei2001Official@gmail.com
********************************************************************/

#ifndef RATIONAL_H
#define RATIONAL_H
#include<iostream>
using namespace std;

class Rational
{
public:
    Rational(int = 0, int = 1 ); // default constructor
    Rational Reduce(); // function for simplify
    friend ostream& operator << (ostream&, const Rational&); //overloading operator insertion
    friend istream& operator >> (istream&, Rational&); //overloading operator extraction
    Rational operator + (const Rational&); // overloading operator addition
    Rational operator - (const Rational&); // overloading operator subtraction
    Rational operator * (const Rational&); // overloading operator multiplication
    Rational operator / (const Rational&); // overloading operator division
    Rational operator +=(const Rational&); // overloading operator +=
    Rational operator -=(const Rational&); // overloading operator -=
    Rational operator *=(const Rational&); // overloading operator *=
    Rational operator /=(const Rational&); // overloading operator /=
    Rational operator ++(int); // postfix ++ (pas )   int = 0    r++  ---> r.operator ++(0)
    Rational operator ++();    // prefix  ++ (pish)              ++r  ---> r.operator ++( )
    Rational operator --(int); // postfix -- (pas )   int = 0    r--  ---> r.operator --(0)
    Rational operator --();    // prefix  -- (pish)              --r  ---> r.operator --( )
    Rational pow (unsigned)const; // overloading power(Rational Number, Rational Number)
    Rational inverse ()const; // overloading inverse(Rational Number)
    bool operator == (const Rational&); // overloading logical operator ==
    bool operator != (const Rational&); // overloading logical operator !=
    bool operator  > (const Rational&); // overloading logical operator >
    bool operator  < (const Rational&); // overloading logical operator <
    bool operator >= (const Rational&); // overloading logical operator >=
    bool operator <= (const Rational&); // overloading logical operator <=

private:
    int numerator;
    int denominator;
    int GCD(int, int); // utility function

};

#endif // RATIONAL_H
