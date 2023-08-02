/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:11:51 by zmoussam          #+#    #+#             */
/*   Updated: 2023/08/02 20:18:37 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"
#include <stack>

int main(int ac , char **av)
{
    std::stack<int> _numbersStack;

    if (ac != 2)
        std::cerr << "Error" << std::endl;
    else if (RPN::__checkarg(std::string(av[1])))
    {
        std::string arg(av[1]);
        for (size_t i = 0; i < arg.length();i++)
        {
            if (std::isdigit(arg[i]))
                _numbersStack.push(static_cast<int>(arg[i]) - 48);
            else if (RPN::isOperator(arg[i]))
            {
                if (!RPN::callcule(_numbersStack, arg[i]))
                    return 1;
            }
        }
        if (_numbersStack.size() != 1)
            std::cerr << "Error : invalid syntax" << std::endl;
        else
            std::cout << _numbersStack.top() << std::endl;
    }
}