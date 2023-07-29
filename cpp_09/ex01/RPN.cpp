/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:11:53 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/28 20:00:46 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}
RPN::RPN(const RPN &copy){*this = copy;}
RPN &RPN::operator=(const RPN &copy){(void)copy; return *this;}
RPN::~RPN(){}

bool RPN::__checkarg(std::string _arg)
{
    for(size_t i = 0; i < _arg.length(); i++)
    {
        if (!std::isdigit(_arg[i]) && (_arg[i] != '*' && _arg[i] != '+' \
        && _arg[i] != '-' && _arg[i] != '/' && _arg[i] != ' '))
        {
            std::cerr << "Error" << std::endl;
            return false; 
        }
        else if (std::isdigit(_arg[i]) && _arg[i] > 48 && std::isdigit(_arg[i + 1]))
        {
              std::cerr << "Error : use numbers between 0 and 9" << std::endl;
              return false; 
        }
    }
    return true;
}

bool  RPN::isOperator(char c)
{
    return (c == '+' || c == '-' || c == '/' || c == '*');
}

bool  RPN::callcule(std::stack<int> &numbersStack, char __op)
{
    int lval, rval, result; 
    if (numbersStack.empty())
        return (std::cerr << "Error : invalid operation" << std::endl, false);
    rval = numbersStack.top();
    numbersStack.pop();
    if (numbersStack.empty())
        return (std::cerr << "Error: invalid operation" << std::endl, false);
    lval = numbersStack.top();
    numbersStack.pop();
    if (__op == '+')
        result = lval + rval;
    if (__op == '-')
        result = lval - rval;
    if (__op == '*')
        result = lval * rval;
    if (__op == '/')
    {
        if (rval == 0)
            return (std::cerr << "Error : division by zero " << std::endl, false);
        result = lval / rval;
    }

    numbersStack.push(result);
    return true;
}