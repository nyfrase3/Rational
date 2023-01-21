#include "./rational.hpp"

int gcd(int firstNum, int secondNum){
    return 0;
}

int lcm(int firstNum, int secondNum){
    int larger = firstNum > secondNum ? firstNum : secondNum;
    int smaller = firstNum == larger ? secondNum : firstNum;
    
    
    for (int multiple = 1; multiple <= smaller; multiple++ ){
        larger *= multiple;
        if(larger % smaller == 0){
            return larger;
        }
    }
    return -1; // something went wrong there was no LCM
     

}

std::ostream& operator<<(std::ostream& out, Rational rational){
    return out;
    }
std::istream& operator>>(std::istream& in, Rational& rational){
    return in;
}