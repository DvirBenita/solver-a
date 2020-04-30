#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <cstring>
#include <exception>
#include <complex>
#include <cmath>


using namespace std;

namespace solver{




class RealVariable{
    // private:

    // double re;

    public:
   
    RealVariable() = default;

    //operator -
    RealVariable& operator-(double real);
    RealVariable& operator-( RealVariable &x);
    friend RealVariable& operator-(double real, RealVariable &x);

    //operator *
    RealVariable& operator*(double real);
    RealVariable& operator*( RealVariable &x);
    friend RealVariable& operator*(double real,  RealVariable &x);
    
    //operator `/`
    RealVariable& operator/(double real);
    RealVariable& operator/( RealVariable &x);
    friend RealVariable &operator/(double real,  RealVariable &x);

    //operator +
    RealVariable& operator+(double real);
    RealVariable& operator+(RealVariable &x);
    friend RealVariable& operator+(double real,  RealVariable &x);

    //operator ==
    RealVariable& operator==(double real);
    RealVariable& operator==(RealVariable &x);
    friend RealVariable& operator==(double real,  RealVariable &x);

    //operator ^
    RealVariable& operator^(int real);

};

double solve(RealVariable x);

class ComplexVariable {
private:
    double _re;
    double _im;


public:

   ComplexVariable() : _re(0), _im(0){};
    ComplexVariable(double re, double im) : _re(re), _im(im){};

    //operator *
    ComplexVariable& operator*( ComplexVariable &y);
    ComplexVariable& operator*(double real);
    ComplexVariable& operator*(std::complex<double> y);
    friend ComplexVariable& operator*(double real,  ComplexVariable &y);
    friend ComplexVariable& operator*(std::complex<double> c,  ComplexVariable &y);

    //operator -
    ComplexVariable& operator-( ComplexVariable &y);
    ComplexVariable& operator-(double real);
    ComplexVariable& operator-(std::complex<double> y);
    friend ComplexVariable& operator-(double real,  ComplexVariable &y);
    friend ComplexVariable& operator-(std::complex<double> c,  ComplexVariable &y);

    //operator +
    ComplexVariable& operator+( ComplexVariable &y);
    ComplexVariable& operator+(double real);
    ComplexVariable& operator+(std::complex<double> y);
    friend ComplexVariable& operator+(double real,  ComplexVariable &y);
    friend ComplexVariable& operator+(std::complex<double> c,  ComplexVariable &y);

    //operator /
    ComplexVariable& operator/( ComplexVariable &y);
    ComplexVariable& operator/(double real);
    ComplexVariable& operator/(std::complex<double> y);
    friend ComplexVariable& operator/(double real,  ComplexVariable &y);
    friend ComplexVariable& operator/(std::complex<double> c,  ComplexVariable &y);

    //operator ==
    ComplexVariable& operator==( ComplexVariable &y);
    ComplexVariable& operator==(double real);
    ComplexVariable& operator==(std::complex<double> y);
    friend ComplexVariable& operator==(double real,  ComplexVariable &y);
    friend ComplexVariable& operator==(std::complex<double> c,  ComplexVariable &y);
    friend ComplexVariable& operator==(std::complex<double> c,  std::complex<double>  &y);

    // operator ^
    ComplexVariable& operator^(int real);
};


std::complex<double> solve(ComplexVariable y);




};