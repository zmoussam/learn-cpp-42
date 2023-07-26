/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:10:50 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/26 15:04:09 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
Span::Span()
{

}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span::Span(const unsigned int maxSize)
{
    this->_maxSize = maxSize;
}

Span::~Span()
{}

Span &Span::operator=(const Span &copy)
{
    this->_container = copy._container;
    this->_maxSize = copy._maxSize;
    return *this;
}
const char * Span::MaxSizeException::what() const throw(){
    return "Exception : you got the max size !";
}
const char * Span::NoSpanFound::what() const throw(){
    return "Exception : No span found !";
}

void Span::addNumber(int newValue)
{
    if (this->_container.size() < this->_maxSize)
        this->_container.push_back(newValue);
    else 
        throw Span::MaxSizeException();
} 
int Span::longestSpan()
{
    if (this->_container.size() > 1)
        return (*std::max_element(this->_container.begin(), this->_container.end()) - \
        *std::min_element(this->_container.begin(), this->_container.end()));
    throw Span::NoSpanFound();
}
int Span::shortestSpan()
{
    if (this->_container.size() <= 1)
         throw Span::NoSpanFound();
    std::vector<int> s = this->_container;
    std::sort(s.begin(), s.end());
    int min = s[1] - s[0];
    for (size_t i = 2; i < s.size(); i++)
    {
        if (s[i] - s[i - 1] < min)
            min = s[i] - s[i - 1];
    }
    return min;
}

void Span::addNumbers(std::vector<int>::iterator _begin, std::vector<int>::iterator _end)
{
    for (; _begin != _end; _begin++)
        this->addNumber(*_begin);
}

void Span::printVector()
{
    std::vector<int>::iterator it = this->_container.begin();

    for (; it != this->_container.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}