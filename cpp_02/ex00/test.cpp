#include "test.hpp"

int main()
{
    test t;
    test tt;
    test ttt;

    t.setN(1);
    tt.setN(1);

    ttt = tt + t;

    std::cout << "t ==  " << t.getN() << "\ntt ==  " << tt.getN() << "\nttt == " << ttt.getN() << std::endl;

}