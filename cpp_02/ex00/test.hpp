/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:28:19 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/24 12:28:20 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
#define TEST_H

#include <iostream>

class test
{
    private:
        int n;
    public:
        test(int n);
        test();
        ~test();
        test operator+(test t);
        void setN(int n);
        int getN();
};

test::test(int n)
{
    this->n = n;
}

test::~test()
{
}
test::test()
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
    return test(this->n + t.getN());
}

#endif
