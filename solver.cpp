
#include "solver.hpp"


using namespace solver;


/* ---- RealVariable ---- */



//operator -
    RealVariable& RealVariable::operator-(double real){
        return *this;
    }
    RealVariable& RealVariable::operator-( RealVariable &x){
        return *this;
    }

    RealVariable& solver::operator-(double real,  RealVariable &x){
      
        return x;
    }

    //operator *
    RealVariable& RealVariable::operator*(double real){
        return *this;
    }

    RealVariable& RealVariable::operator*(RealVariable &x){
        return x;
    }
     RealVariable& solver::operator*(double real,  RealVariable &x){
         return x;
     }
    
    //operator `/`
    RealVariable& RealVariable::operator/(double real){
        return *this;
    }
    RealVariable& RealVariable::operator/( RealVariable &x){
        return x;
    }
     RealVariable &operator/(double real, RealVariable &x){
         return x;
     }

    //operator +
    RealVariable& RealVariable::operator+(double real){
        return *this;
    }
    RealVariable& RealVariable::operator+(RealVariable &x){
        return x;
    }
    RealVariable& solver::operator+(double real, RealVariable &x){
        return x;
    }

    //operator ==
    RealVariable& RealVariable::operator==(double real){
        return *this;
    }

    RealVariable& RealVariable::operator==(RealVariable &x){
        return x;
    }
     RealVariable& solver::operator==(double real,  RealVariable &x){
         return x;
    }

    //operator ^
    RealVariable& RealVariable::operator^(int real){
        return *this;
    }




/* ---- ComplexVariable -----*/


    //operator *
    ComplexVariable& ComplexVariable::operator*( ComplexVariable &y){
        return y;
    }
    ComplexVariable& ComplexVariable::operator*(double real){
        return *this;
    }
    ComplexVariable& ComplexVariable::operator*(std::complex<double> y){
        return *this;
    }
     ComplexVariable& solver::operator*(double real,  ComplexVariable &y){
         return y;
     }
     ComplexVariable& solver::operator*(std::complex<double> c,  ComplexVariable &y){
         return y;
     }

    //operator -
    ComplexVariable& ComplexVariable::operator-( ComplexVariable &y){
        return *this;
    }
    ComplexVariable& ComplexVariable::operator-(double real){
        return *this;
    }
    ComplexVariable& ComplexVariable::operator-(std::complex<double> y){
        return *this;
    }
    ComplexVariable& solver::operator-(double real,  ComplexVariable &y){
        return y;
    }
     ComplexVariable& solver::operator-(std::complex<double> c,  ComplexVariable &y){
         return y;
    }

    //operator +
    ComplexVariable& ComplexVariable::operator+( ComplexVariable &y){
        return *this;
    }
    ComplexVariable& ComplexVariable::operator+(double real){
        return *this;
    }
    ComplexVariable& ComplexVariable::operator+(std::complex<double> y){
        return *this;
    }
     ComplexVariable& solver::operator+(double real,  ComplexVariable &y){
         return y;
     }
    ComplexVariable& solver::operator+(std::complex<double> c,  ComplexVariable &y){
        return y;
    }

    //operator /
    ComplexVariable& ComplexVariable::operator/( ComplexVariable &y){
        return *this;
    }
    ComplexVariable&ComplexVariable:: operator/(double real){
        return *this;
    }
    ComplexVariable& ComplexVariable::operator/(std::complex<double> y){
        return *this;
    }
     ComplexVariable& solver::operator/(double real,  ComplexVariable &y){
         return y;
     }
     ComplexVariable& solver::operator/(std::complex<double> c,  ComplexVariable &y){
         return y;
     }

    //operator ==
    ComplexVariable& ComplexVariable::operator==(ComplexVariable &y){
        return *this;
    }
    ComplexVariable& ComplexVariable::operator==(double real){
        return *this;
    }
    ComplexVariable& ComplexVariable::operator==(std::complex<double> y){
        return *this;
    }
     ComplexVariable& solver::operator==(double real,  ComplexVariable &y){
         return y;
     }
     ComplexVariable& solver::operator==(std::complex<double> c,  ComplexVariable &y){
         return y;
    }
     ComplexVariable& solver::operator==(std::complex<double> c,  std::complex<double>  &y){

     }

    // operator ^
    ComplexVariable& ComplexVariable::operator^(int real){
        return *this;
    }



/* ---- solve ---- */

double solver::solve(RealVariable r){
    return 1.0;
}


std::complex<double> solver::solve(ComplexVariable r){
    return 1.0;
}


