/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:11:56 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/28 19:58:51 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN__
#define RPN__
#include <string>
#include <iostream>
#include <stack>

    class RPN
    {
        private: 
            RPN();
            RPN(const RPN &copy);
            RPN &operator=(const RPN &copy);
            ~RPN();
            
        public :
            static bool __checkarg(std::string _arg);
            static bool isOperator(char c);
            static bool callcule(std::stack<int> &numbersStack, char __op);
    };

#endif