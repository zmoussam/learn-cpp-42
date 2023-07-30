/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:03:25 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/30 02:25:51 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <list>


std::vector<std::pair<unsigned int, unsigned int> > __getPairVec(std::vector<unsigned int> _vec)
{
    size_t j = 0;
    size_t len = _vec.size();
    std::vector<std::pair<unsigned int, unsigned int> > _result(len / 2);
    
    for (size_t i = 0; i < len ; i++)
    {
        if (_vec[i] < _vec[i + 1])
        {
            _result[j].second = _vec[i];
            _result[j].first = _vec[++i];
        }
        else
        {
            _result[j].first = _vec[i];
            _result[j].second = _vec[++i];
        }
        j++;
    }
    return _result;
}

void merge(std::vector<std::pair<unsigned int, unsigned int> > leftArray, \
std::vector<std::pair<unsigned int, unsigned int> > rightArray, \
std::vector<std::pair<unsigned int, unsigned int> > &baseArray)
{
    size_t l_len = baseArray.size() / 2;
    size_t r_len = baseArray.size() - l_len;
    size_t i = 0;
    size_t l = 0;
    size_t r = 0;

    while(l < l_len && r < r_len)
    {
        if (leftArray[l].first < rightArray[r].first)
            baseArray[i++] = leftArray[l++];
        else
            baseArray[i++] = rightArray[r++];
    }
    for(; l < l_len; l++)
        baseArray[i++] = leftArray[l];

    for(; r < r_len ; r++)
        baseArray[i++] = rightArray[r];
}

void __mergesort(std::vector<std::pair<unsigned int, unsigned int> > &pairVec) 
{
    size_t len = pairVec.size();
    if (len <= 1)
        return;

    size_t middle = len / 2;
    std::vector<std::pair<unsigned int, unsigned int> > leftArray(middle);
    std::vector<std::pair<unsigned int, unsigned int> > rightArray(len - middle);
    
    size_t j = 0;
    for (size_t i = 0; i < len; i++)
    {
        if (i < middle)
            leftArray[i] = pairVec[i];
        else
        {
            rightArray[j] = pairVec[i];
            j++;
        }
    }
    __mergesort(leftArray);
    __mergesort(rightArray);

    merge(leftArray, rightArray, pairVec);
    
}

std::pair<std::vector<unsigned int>, std::vector<unsigned int> > __get_mainChain_pend(\
std::vector<std::pair<unsigned int, unsigned int> > pairVec)
{
    size_t vecLength = pairVec.size();
    std::pair<std::vector<unsigned int> , std::vector<unsigned int> > __result;

    __result.first.push_back(pairVec[0].second);
    __result.first.push_back(pairVec[0].first);

    for (size_t i = 1; i < vecLength; i++)
    {
        __result.first.push_back(pairVec[i].first);
        __result.second.push_back(pairVec[i].second);
    }
    return __result;
}

// Function to calculate the Jacobsthal numbers
std::vector<unsigned int> jacobsthalNumbers(unsigned int n)
{
    std::vector<unsigned int> jacobsthalSeq;
    jacobsthalSeq.push_back(0);
    jacobsthalSeq.push_back(1);
    unsigned int next_num = 0;
    while (jacobsthalSeq.back() <= n) {
        next_num = jacobsthalSeq[jacobsthalSeq.size() - 1] + 2 * jacobsthalSeq[jacobsthalSeq.size() - 2];
        if (next_num < n) {
            jacobsthalSeq.push_back(next_num);
        } else {
            break;
        }
    }
    jacobsthalSeq.push_back(next_num);
    jacobsthalSeq.erase(jacobsthalSeq.begin(), jacobsthalSeq.begin() + 3);
    return jacobsthalSeq;
}


std::vector<unsigned int> __getInsertionOrder(std::vector<unsigned int> jacobsthalnumber, \
std::pair<std::vector<unsigned int>, std::vector<unsigned int> > mainChain_pend,\
 std::vector<unsigned int>)
{
    size_t pendSize = mainChain_pend.second.size();
    size_t i = 0;

    // if (jacobsthalnumber.empty()) you check this to avoid any segfault
    
    size_t top = jacobsthalnumber[0];
    size_t j = 0;
    while (i < pendSize)
    {
        if (top <= pendSize)
        {
            mainChain_pend.first.insert(std::lower_bound(mainChain_pend.first.begin(), \
            mainChain_pend.first.end(), mainChain_pend.second[top - 2]),mainChain_pend.second[top - 2]);
            i++;
        }
        while (j < top && j < pendSize)
        {
            mainChain_pend.first.insert(std::lower_bound(mainChain_pend.first.begin(), \
            mainChain_pend.first.end(), mainChain_pend.second[j]), mainChain_pend.second[j]);
            j++;
        }
        i++;
         if (i < jacobsthalnumber.size())
            top = jacobsthalnumber[i];
        std::cout << "top : " << top << std::endl;
    }
    return mainChain_pend.first;
}

// run the code with /PmergeMe 7 8 27 100 11 46 2 53 0 875 975 656 99999 you have error in pend and main chain 
int main(int ac, char **av)
{
    std::vector<unsigned int> vec;
    std::pair<std::vector<unsigned int>, std::vector<unsigned int> > mainChain_pend;
    std::list<unsigned int> lst;
    std::vector<unsigned int> _insertionOrder;
    unsigned int struggler;
    bool check = false;
    if (ac >= 2)
    {
        std::vector< std::pair<unsigned int, unsigned int> > pairVec;
        if (__getContainers(vec, lst, av))
        {
            if (vec.size() % 2 != 0)
            {
                check = true;
                struggler = vec.back();
                vec.pop_back();
            }
            pairVec =  __getPairVec(vec);
            __mergesort(pairVec);
            mainChain_pend = __get_mainChain_pend(pairVec);
            vec = __getInsertionOrder(jacobsthalNumbers(mainChain_pend.second.size()), mainChain_pend, vec);
            std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pairVec.begin(); 
            std::cout << "before: " ; 
            for (; it != pairVec.end(); it++)
            {
                std::cout <<  "<" << it->first << " , " << it->second << ">  ";
            }

            std::vector<unsigned int>::iterator itt = mainChain_pend.first.begin();
            std::cout << std::endl << "main chain : "; 
            for (; itt != mainChain_pend.first.end(); itt++)
            {
                std::cout << *itt << " " ;
            }

            std::vector<unsigned int>::iterator ittt = mainChain_pend.second.begin();
            std::cout << std::endl << "pend : "; 
            for (; ittt != mainChain_pend.second.end(); ittt++)
            {
                std::cout << *ittt << " " ;
            }

            std::vector<unsigned int>::iterator itttt = vec.begin();
            std::cout << std::endl << "sort : "; 
            for (; itttt != vec.end(); itttt++)
            {
                std::cout << *itttt << " " ;
            }
        }
    }
}