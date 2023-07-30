/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:03:34 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/30 23:10:42 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sstream>

bool __isNumber(std::string _arg)
{
    size_t len = _arg.length();
    for (size_t i = 0; i < len; i++)
    {
        if (!std::isdigit(_arg[i]))
            return false;
    }
    return true;
}

std::vector<unsigned int> __sort_vector(char **av, double &process_time)
{
    std::pair<std::vector<unsigned int>, std::vector<unsigned int> > mainChain_pend;
    std::vector<std::pair<unsigned int, unsigned int> > pairVec;
    std::vector<unsigned int> vec;
    unsigned int struggler;
    bool check  = false;
    process_time = 0;
    if (__getContainers(vec, av))
    {
        if (vec.size() % 2 != 0)
        {
            check = true;
            struggler = vec.back();
            vec.pop_back();
        }
        pairVec = __getPairVec(vec);
        __recursivelysort_Vector(pairVec);
        mainChain_pend = __get_mainChain_pend(pairVec);
        vec = __merge_insert_sort(jacobsthalNumbers(mainChain_pend.second.size()), mainChain_pend, vec);
        if (check)
            vec.insert(std::lower_bound(vec.begin(), vec.end(), struggler), struggler);
    }
    return vec;
}

std::vector<unsigned int> __merge_insert_sort(std::vector<unsigned int> jacobsthalnumber, \
std::pair<std::vector<unsigned int>, std::vector<unsigned int> > mainChain_pend,\
 std::vector<unsigned int>)
{
    size_t pendSize = mainChain_pend.second.size();
    size_t j_size = jacobsthalnumber.size();
    size_t top = 3, i = 0, j = 0;
    
    while (i < j_size || j_size == 0)
    {
        if (top < pendSize)
        {
            mainChain_pend.first.insert(std::lower_bound(mainChain_pend.first.begin(), \
            mainChain_pend.first.end(), mainChain_pend.second[top]), mainChain_pend.second[top]);
        }
        while (j < top && j < pendSize)
        {
            mainChain_pend.first.insert(std::lower_bound(mainChain_pend.first.begin(), \
            mainChain_pend.first.end(), mainChain_pend.second[j]), mainChain_pend.second[j]);
            j++;
        }
        if (j_size == 0)
            break;
        j++;
        i++;        
        top = jacobsthalnumber[i];
    }
    return mainChain_pend.first;
}
std::pair<std::vector<unsigned int>, std::vector<unsigned int> > __get_mainChain_pend(\
std::vector<std::pair<unsigned int, unsigned int> > pairVec)
{
    size_t vecLength = pairVec.size();
    std::pair<std::vector<unsigned int> , std::vector<unsigned int> > __result;
    
    if (!pairVec.empty())
    {
        __result.first.push_back(pairVec[0].second);
        __result.first.push_back(pairVec[0].first);
    }

    for (size_t i = 1; i < vecLength; i++)
    {
        __result.first.push_back(pairVec[i].first);
        __result.second.push_back(pairVec[i].second);
    }
    return __result;
}
void __recursivelysort_Vector(std::vector<std::pair<unsigned int, unsigned int> > &pairVec) 
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
    __recursivelysort_Vector(leftArray);
   __recursivelysort_Vector(rightArray);

    __pairVector_sort(leftArray, rightArray, pairVec);
    
}

void __pairVector_sort(std::vector<std::pair<unsigned int, unsigned int> > leftArray, \
std::vector<std::pair<unsigned int, unsigned int> > rightArray, \
std::vector<std::pair<unsigned int, unsigned int> > &baseArray)
{
    size_t l_len = baseArray.size() / 2;
    size_t r_len = baseArray.size() - l_len;
    size_t i = 0, l = 0, r = 0;

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

std::vector<std::pair<unsigned int, unsigned int> > __getPairVec(std::vector<unsigned int> _vec)
{
    size_t j = 0;
    size_t len = _vec.size();
    std::vector<std::pair<unsigned int, unsigned int> > _result(len / 2);
    
    for (size_t i = 0; i < len; i++)
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
void printvec(std::vector<unsigned int> _vec)
{
    std::vector<unsigned int>::iterator itt = _vec.begin();
    for (; itt != _vec.end(); itt++)
    {
        std::cout << *itt << " " ;
    }
    std::cout << std::endl;
}