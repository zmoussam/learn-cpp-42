/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:11:44 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/02 22:44:52 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Integer.hpp"

Integer::Integer(int const n) : _n(n)
{
    std::cout << "Constructor called with value " << n << std::endl;
    return;
}

Integer::~Integer(void)
{
    std::cout << "Destructor called with value " << this->_n << std::endl;
    return ;
}

int Integer::getValue(void) const
{
    return this->_n;
}

Integer & Integer::operator=(Integer const & rhs){
    std::cout << "Assignation operator called from " << this->_n;
    std::cout << " to " << rhs.getValue() << std::endl;

    this->_n = rhs.getValue();

    return *this;
}

Integer Integer::operator+(Integer const & rhs) const{
    std::cout << "Addition operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    return (Integer(this->_n + rhs.getValue()));
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs){
    o << rhs.getValue();
    return o;
}