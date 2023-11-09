//
//  main.cpp
//  Task-9.1
//
//  Created by Маргарет  on 07.11.2023.
//

#include <iostream>
#include <cmath>

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }
    
    bool operator==(Fraction right) {
        double M1 = abs(numerator_ / denominator_);
        double M2 = abs(right.numerator_ / right.denominator_);
        return M1 == M2;
    }
    
    bool operator!=(Fraction right) {
        return !(*this == right);
    }
    
    bool operator>(Fraction right) {
        double M1 = abs(numerator_ / denominator_);
        double M2 = abs(right.numerator_ / right.denominator_);
        return M1 > M2;
    }
    
    bool operator<(Fraction right) {
        return(right > *this);
    }
    
    bool operator>=(Fraction right) {
        return !(*this < right);
    }
    
    bool operator<=(Fraction right) {
        return !(*this > right);
    }
    
};


int main()
{
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}
