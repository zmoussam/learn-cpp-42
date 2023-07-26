/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:10:57 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/26 20:34:55 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    // std::cout << mstack.top() << std::endl;

    // mstack.pop();

    // std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    // [...]
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "=================================" << std::endl;
    MutantStack<int>::reverse_iterator r_it = mstack.rbegin();
    MutantStack<int>::reverse_iterator r_ite = mstack.rend();
    ++r_it;
    --r_it;
    while (r_it != r_ite)
    {
        std::cout << *r_it << std::endl;
        ++r_it;
    }
    
    std::cout << "=================================" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << mstack.top() << std::endl;
        mstack.pop();
    }
    std::stack<int> s(mstack);
    return 0;
}