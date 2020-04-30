

#include "doctest.h"

#include "solver.hpp"

using namespace std;

using solver::solve, solver::RealVariable, solver::ComplexVariable;

TEST_CASE("test case 1"){

    RealVariable x; 

CHECK_THROWS_AS(solve(59*(x^2) + 46*x + 51 == 0), std::exception);
CHECK_THROWS_AS(solve(32*(x^2) + 33*x + 52 == 0), std::exception);
CHECK(((solve(31*(x^2) + 56*x + 25 == 0) >= -0.8066) && (solve(31*(x^2) + 56*x + 25 == 0) <= -0.8064)));
CHECK(((solve(12*(x^2) + 47*x + 13 == 0) >= -0.2996) && (solve(12*(x^2) + 47*x + 13 == 0) <= -0.2994)));
CHECK_THROWS_AS(solve(47*(x^2) + 3*x + 50 == 0), std::exception);
CHECK(((solve(7*(x^2) + 47*x + 55 == 0) >= -1.5097) && (solve(7*(x^2) + 47*x + 55 == 0) <= -1.5095)));
CHECK_THROWS_AS(solve(26*(x^2) + 33*x + 21 == 0), std::exception);
CHECK_THROWS_AS(solve(36*(x^2) + 6*x + 46 == 0), std::exception);
CHECK_THROWS_AS(solve(5*(x^2) + 1*x + 57 == 0), std::exception);
CHECK_THROWS_AS(solve(4*(x^2) + 26*x + 45 == 0), std::exception);
CHECK(((solve(46*(x^2) + 47*x + 7 == 0) >= -0.1811) && (solve(46*(x^2) + 47*x + 7 == 0) <= -0.1809)));
CHECK_THROWS_AS(solve(3*(x^2) + 8*x + 14 == 0), std::exception);
CHECK_THROWS_AS(solve(19*(x^2) + 45*x + 44 == 0), std::exception);
CHECK_THROWS_AS(solve(29*(x^2) + 9*x + 28 == 0), std::exception);
CHECK_THROWS_AS(solve(12*(x^2) + 8*x + 44 == 0), std::exception);
CHECK_THROWS_AS(solve(46*(x^2) + 39*x + 38 == 0), std::exception);
CHECK_THROWS_AS(solve(31*(x^2) + 20*x + 19 == 0), std::exception);
CHECK_THROWS_AS(solve(30*(x^2) + 3*x + 23 == 0), std::exception);
CHECK(((solve(7*(x^2) + 46*x + 14 == 0) >= -0.32) && (solve(7*(x^2) + 46*x + 14 == 0) <= -0.3198)));
CHECK_THROWS_AS(solve(57*(x^2) + 43*x + 29 == 0), std::exception);
CHECK_THROWS_AS(solve(33*(x^2) + 9*x + 33 == 0), std::exception);
CHECK_THROWS_AS(solve(9*(x^2) + 33*x + 48 == 0), std::exception);
CHECK_THROWS_AS(solve(41*(x^2) + 2*x + 56 == 0), std::exception);
CHECK(((solve(5*(x^2) + 54*x + 5 == 0) >= -0.0935) && (solve(5*(x^2) + 54*x + 5 == 0) <= -0.0933)));
CHECK_THROWS_AS(solve(27*(x^2) + 1*x + 1 == 0), std::exception);
CHECK(((solve(1*(x^2) + 55*x + 5 == 0) >= -0.0912) && (solve(1*(x^2) + 55*x + 5 == 0) <= -0.091)));
CHECK_THROWS_AS(solve(32*(x^2) + 36*x + 21 == 0), std::exception);
CHECK_THROWS_AS(solve(45*(x^2) + 40*x + 10 == 0), std::exception);
CHECK_THROWS_AS(solve(14*(x^2) + 34*x + 24 == 0), std::exception);
CHECK(((solve(47*(x^2) + 56*x + 12 == 0) >= -0.2803) && (solve(47*(x^2) + 56*x + 12 == 0) <= -0.2801)));
CHECK(((solve(7*(x^2) + 34*x + 19 == 0) >= -0.6444) && (solve(7*(x^2) + 34*x + 19 == 0) <= -0.6442)));
CHECK_THROWS_AS(solve(42*(x^2) + 5*x + 4 == 0), std::exception);
CHECK_THROWS_AS(solve(22*(x^2) + 30*x + 20 == 0), std::exception);
CHECK_THROWS_AS(solve(37*(x^2) + 29*x + 45 == 0), std::exception);
CHECK_THROWS_AS(solve(12*(x^2) + 42*x + 49 == 0), std::exception);
CHECK_THROWS_AS(solve(11*(x^2) + 4*x + 18 == 0), std::exception);
CHECK_THROWS_AS(solve(45*(x^2) + 44*x + 23 == 0), std::exception);
CHECK_THROWS_AS(solve(9*(x^2) + 27*x + 34 == 0), std::exception);
CHECK(((solve(14*(x^2) + 48*x + 38 == 0) >= -1.2406) && (solve(14*(x^2) + 48*x + 38 == 0) <= -1.2404)));
CHECK(((solve(2*(x^2) + 60*x + 6 == 0) >= -0.1004) && (solve(2*(x^2) + 60*x + 6 == 0) <= -0.1002)));
CHECK_THROWS_AS(solve(18*(x^2) + 16*x + 20 == 0), std::exception);
CHECK_THROWS_AS(solve(24*(x^2) + 39*x + 52 == 0), std::exception);
CHECK_THROWS_AS(solve(52*(x^2) + 7*x + 18 == 0), std::exception);
CHECK_THROWS_AS(solve(60*(x^2) + 7*x + 47 == 0), std::exception);
CHECK_THROWS_AS(solve(55*(x^2) + 55*x + 53 == 0), std::exception);
CHECK_THROWS_AS(solve(56*(x^2) + 40*x + 15 == 0), std::exception);
CHECK_THROWS_AS(solve(42*(x^2) + 29*x + 30 == 0), std::exception);
CHECK_THROWS_AS(solve(2*(x^2) + 20*x + 60 == 0), std::exception);
CHECK_THROWS_AS(solve(58*(x^2) + 49*x + 44 == 0), std::exception);
CHECK_THROWS_AS(solve(45*(x^2) + 32*x + 50 == 0), std::exception);
CHECK(((solve(3*(x^2) + 59*x + 12 == 0) >= -0.2056) && (solve(3*(x^2) + 59*x + 12 == 0) <= -0.2054)));
CHECK_THROWS_AS(solve(1*(x^2) + 6*x + 47 == 0), std::exception);
CHECK(((solve(7*(x^2) + 47*x + 34 == 0) >= -0.8248) && (solve(7*(x^2) + 47*x + 34 == 0) <= -0.8246)));
CHECK(((solve(5*(x^2) + 58*x + 20 == 0) >= -0.3558) && (solve(5*(x^2) + 58*x + 20 == 0) <= -0.3556)));
CHECK_THROWS_AS(solve(17*(x^2) + 19*x + 20 == 0), std::exception);
CHECK_THROWS_AS(solve(41*(x^2) + 46*x + 13 == 0), std::exception);
CHECK_THROWS_AS(solve(47*(x^2) + 55*x + 44 == 0), std::exception);
CHECK_THROWS_AS(solve(60*(x^2) + 21*x + 38 == 0), std::exception);
CHECK_THROWS_AS(solve(37*(x^2) + 42*x + 60 == 0), std::exception);
CHECK_THROWS_AS(solve(31*(x^2) + 55*x + 42 == 0), std::exception);
}

TEST_CASE("test 2"){
   

    ComplexVariable y; 
 std::complex<double> mycomplex(0, 0); 
mycomplex= std::complex<double>(0, -12); 
CHECK(solve(16*y + 25i == 15*y+13i) == mycomplex); 
mycomplex= std::complex<double>(0, 1); 
CHECK(solve(1*y + 35i == 0*y+36i) == mycomplex); 
mycomplex= std::complex<double>(0, -22); 
CHECK(solve(33*y + 39i == 32*y+17i) == mycomplex); 
mycomplex= std::complex<double>(0, -17); 
CHECK(solve(12*y + 38i == 11*y+21i) == mycomplex); 
mycomplex= std::complex<double>(0, 7); 
CHECK(solve(18*y + 1i == 17*y+8i) == mycomplex); 
mycomplex= std::complex<double>(0, 30); 
CHECK(solve(9*y + 6i == 8*y+36i) == mycomplex); 
mycomplex= std::complex<double>(0, 17); 
CHECK(solve(24*y + 10i == 23*y+27i) == mycomplex); 
mycomplex= std::complex<double>(0, 15); 
CHECK(solve(36*y + 1i == 35*y+16i) == mycomplex); 
mycomplex= std::complex<double>(0, 6); 
CHECK(solve(26*y + 17i == 25*y+23i) == mycomplex); 
mycomplex= std::complex<double>(0, -1); 
CHECK(solve(31*y + 21i == 30*y+20i) == mycomplex); 
mycomplex= std::complex<double>(0, -8); 
CHECK(solve(9*y + 18i == 8*y+10i) == mycomplex); 
mycomplex= std::complex<double>(0, 8); 
CHECK(solve(30*y + 5i == 29*y+13i) == mycomplex); 
mycomplex= std::complex<double>(0, 16); 
CHECK(solve(16*y + 21i == 15*y+37i) == mycomplex); 
mycomplex= std::complex<double>(0, 30); 
CHECK(solve(8*y + 8i == 7*y+38i) == mycomplex); 
mycomplex= std::complex<double>(0, 9); 
CHECK(solve(26*y + 22i == 25*y+31i) == mycomplex); 
mycomplex= std::complex<double>(0, -31); 
CHECK(solve(23*y + 34i == 22*y+3i) == mycomplex); 
mycomplex= std::complex<double>(0, -17); 
CHECK(solve(38*y + 25i == 37*y+8i) == mycomplex); 
mycomplex= std::complex<double>(0, -11); 
CHECK(solve(3*y + 20i == 2*y+9i) == mycomplex); 
mycomplex= std::complex<double>(0, -2); 
CHECK(solve(40*y + 3i == 39*y+1i) == mycomplex); 
mycomplex= std::complex<double>(0, 5); 
CHECK(solve(38*y + 6i == 37*y+11i) == mycomplex); 
mycomplex= std::complex<double>(0, -7); 
CHECK(solve(30*y + 23i == 29*y+16i) == mycomplex); 
mycomplex= std::complex<double>(0, -24); 
CHECK(solve(7*y + 39i == 6*y+15i) == mycomplex); 
mycomplex= std::complex<double>(0, 16); 
CHECK(solve(12*y + 5i == 11*y+21i) == mycomplex); 
mycomplex= std::complex<double>(0, -21); 
CHECK(solve(27*y + 31i == 26*y+10i) == mycomplex); 
mycomplex= std::complex<double>(0, 6); 
CHECK(solve(11*y + 26i == 10*y+32i) == mycomplex); 
mycomplex= std::complex<double>(0, 17); 
CHECK(solve(12*y + 10i == 11*y+27i) == mycomplex); 
mycomplex= std::complex<double>(0, 9); 
CHECK(solve(38*y + 18i == 37*y+27i) == mycomplex); 
mycomplex= std::complex<double>(0, 12); 
CHECK(solve(33*y + 20i == 32*y+32i) == mycomplex); 
mycomplex= std::complex<double>(0, 7); 
CHECK(solve(22*y + 29i == 21*y+36i) == mycomplex); 
mycomplex= std::complex<double>(0, -15); 
CHECK(solve(32*y + 24i == 31*y+9i) == mycomplex); 
mycomplex= std::complex<double>(0, 27); 
CHECK(solve(35*y + 5i == 34*y+32i) == mycomplex); 
mycomplex= std::complex<double>(0, -3); 
CHECK(solve(25*y + 31i == 24*y+28i) == mycomplex); 
mycomplex= std::complex<double>(0, -30); 
CHECK(solve(1*y + 36i == 0*y+6i) == mycomplex); 
mycomplex= std::complex<double>(0, -4); 
CHECK(solve(4*y + 36i == 3*y+32i) == mycomplex); 
mycomplex= std::complex<double>(0, -1); 
CHECK(solve(37*y + 19i == 36*y+18i) == mycomplex); 
mycomplex= std::complex<double>(0, 3); 
CHECK(solve(40*y + 20i == 39*y+23i) == mycomplex); 
mycomplex= std::complex<double>(0, 22); 
CHECK(solve(1*y + 6i == 0*y+28i) == mycomplex); 
mycomplex= std::complex<double>(0, -13); 
CHECK(solve(18*y + 16i == 17*y+3i) == mycomplex); 
mycomplex= std::complex<double>(0, 31); 
CHECK(solve(9*y + 8i == 8*y+39i) == mycomplex); 
mycomplex= std::complex<double>(0, 16); 
CHECK(solve(36*y + 15i == 35*y+31i) == mycomplex); 
}