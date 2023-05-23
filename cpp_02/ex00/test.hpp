#ifndef TEST_H
#define TEST_H

#include <iostream>

class test
{
    private:
        int n;
    public:
        test(/* args */);
        ~test();
        test operator+(test t);
        void setN(int n);
        int getN();
};

test::test(/* args */)
{
}

test::~test()
{
}

void test::setN(int n)
{
    this->n = n;
}

int test::getN()
{
    return this->n;
}

test test::operator+(test t)
{
    this->n = t.getN() + this->n;
    return *this;
}

#endif
