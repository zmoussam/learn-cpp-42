/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:11:02 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/26 20:31:15 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK__
#define MUTANTSTACK__
#include <iostream>
#include <deque>
#include <stack>
#include <algorithm>

template<typename T, typename _container = std::deque<T> > 
class MutantStack : public std::stack<T, _container>
{
    public:
        typedef typename _container::iterator iterator;
        typedef typename _container::reverse_iterator reverse_iterator;
        MutantStack(){}
        ~MutantStack(){}
        MutantStack(const MutantStack &copy){ *this = copy ;}
        MutantStack &operator=(const MutantStack &copy){
            this->c = copy.c;
            return *this;
        }
        iterator begin(){
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        reverse_iterator rbegin(){
            return this->c.rbegin();
        }
        reverse_iterator rend()
        {
            return this->c.rend();
        }
        
    };
    
#endif