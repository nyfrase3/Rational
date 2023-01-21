#include <iostream>

class Rational {
    double m_rationalNumber;
    int m_numerator;
    int m_denominator;
    

    public:
    Rational()
    {m_rationalNumber = 0;}
    Rational(double num = 0) {
         m_rationalNumber = num / 1;
         }
    Rational(int numerator, int denmoninator){
        if (denmoninator == 0){
            return;
        } 

    }

};


int main() {
    std::cout << "This is a test.";
    return 0;
}

