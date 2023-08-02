/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:03:34 by zmoussam          #+#    #+#             */
/*   Updated: 2023/08/01 20:44:35 by zmoussam         ###   ########.fr       */
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

std::vector<unsigned int> __fordJohnson_sort_vector(char **av)
{
    std::pair<std::vector<unsigned int>, std::vector<unsigned int> > mainChain_pend;
    std::vector<std::pair<unsigned int, unsigned int> > pairVec;
    std::vector<unsigned int> vec;
    unsigned int struggler;
    bool check  = false;
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
        mainChain_pend = __get_mainChain_pend_vector(pairVec);
        vec = __sort_vector(jacobsthalNumbers(mainChain_pend.second.size()), mainChain_pend, vec);
        if (check)
            vec.insert(std::lower_bound(vec.begin(), vec.end(), struggler), struggler);
        return vec;
    }
    else 
        return std::vector<unsigned int>();
}

std::vector<unsigned int> __sort_vector(std::vector<unsigned int> jacobsthalnumber, \
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
        if (i < j_size)     
            top = jacobsthalnumber[i];
    }
    return mainChain_pend.first;
}
std::pair<std::vector<unsigned int>, std::vector<unsigned int> > __get_mainChain_pend_vector(\
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
void printSortedVec(std::vector<unsigned int> _vec)
{
    std::cout << "After :  " ;
    std::vector<unsigned int>::iterator itt = _vec.begin();
    for (; itt != _vec.end(); itt++)
    {
        std::cout << *itt << " " ;
    }
    std::cout << std::endl;
}

std::list<std::pair<unsigned int, unsigned int> > __getPairList(std::list<unsigned int> _lst)
{
    size_t len = _lst.size();
    std::list<std::pair<unsigned int, unsigned int> > _result(len / 2);
    std::list<unsigned int>::iterator it = _lst.begin();
    std::list<std::pair<unsigned int , unsigned int> >::iterator r_it = _result.begin();

    for (; it != _lst.end() ; it++)
    {
        if (*it < *(++it))
        {
            it--;
            r_it->second = *it;
            r_it->first = *(++it);
        }
        else
        {
            it--;
            r_it->first = *it;
            r_it->second = *(++it);
        }
        r_it++;
    }
    return _result;
}

void __pairList_sort(std::list<std::pair<unsigned int, unsigned int> > leftList, \
std::list<std::pair<unsigned int, unsigned int> > rightList, \
std::list<std::pair<unsigned int, unsigned int> > &baseList)
{
    std::list<std::pair<unsigned int, unsigned int> >::iterator base_it = baseList.begin();
    std::list<std::pair<unsigned int, unsigned int> >::iterator l_it = leftList.begin();
    std::list<std::pair<unsigned int, unsigned int> >::iterator r_it = rightList.begin();

    while(l_it != leftList.end() && r_it != rightList.end())
    {
        if (l_it->first < r_it->first)
        {
            *base_it = *l_it;
            base_it++;
            l_it++;
        }
        else
        {
            *base_it = *r_it;
            base_it++;
            r_it++;
        }
    }
    for(; l_it != leftList.end(); l_it++)
    {
        *base_it = *l_it;
        base_it++;
    }

    for(; r_it != rightList.end() ; r_it++)
    {
        *base_it = *r_it;
        base_it++;
    }
}

void  __recursivelysort_List(std::list<std::pair<unsigned int, unsigned int> > &pairList) 
{
    size_t len = pairList.size();
    if (len <= 1)
        return;

    std::list<std::pair<unsigned int, unsigned int> >::iterator it = pairList.begin();
    std::list<std::pair<unsigned int, unsigned int> > leftList;
    std::list<std::pair<unsigned int, unsigned int> > rightList;
    size_t middle = len / 2;
    
    size_t i = 0;

    for (; it != pairList.end(); it++)
    {
        if (i < middle)
            leftList.push_back(*it);
        else
            rightList.push_back(*it);
        i++;
    }
     __recursivelysort_List(leftList);
    __recursivelysort_List(rightList);

    __pairList_sort(leftList, rightList, pairList);
    
}

std::pair<std::list<unsigned int>, std::list<unsigned int> > __get_mainChain_pend(\
std::list<std::pair<unsigned int, unsigned int> > pairList)
{
    std::pair<std::list<unsigned int> , std::list<unsigned int> > __result;
    std::list<std::pair<unsigned int, unsigned int> >::iterator pairlist_it = pairList.begin();

    if (!pairList.empty())
    {
        __result.first.push_back(pairlist_it->second);
        __result.first.push_back(pairlist_it->first);
        pairlist_it++;
    }

    for (; pairlist_it != pairList.end(); pairlist_it++)
    {
        __result.first.push_back(pairlist_it->first);
        __result.second.push_back(pairlist_it->second);
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

unsigned int __get_value_at(std::list<unsigned int> lst, unsigned int _pos)
{
    std::list<unsigned int>::iterator it = lst.begin();
    unsigned int i = 0;
    for (;i < _pos; it++)
    {
        i++;
    }
    return *it;
}

void printSortedList(std::list<unsigned int> _list)
{
    std::list<unsigned int>::iterator itt = _list.begin();
    std::cout << "After :  " ;
    for (; itt != _list.end(); itt++)
    {
        std::cout << *itt << " " ;
    }
    std::cout << std::endl;
}

std::list<unsigned int> __sort_list(std::vector<unsigned int> jacobsthalnumber, \
std::pair<std::list<unsigned int>, std::list<unsigned int> > mainChain_pend,\
std::list<unsigned int>)
{
    size_t pendSize = mainChain_pend.second.size();
    size_t j_size = jacobsthalnumber.size();
    
    std::list<unsigned int>::iterator pend_it = mainChain_pend.second.begin();
    size_t top = 3, i = 0, j = 0;
    
    while (i < j_size || j_size == 0)
    {
        if (top < pendSize)
        {
            mainChain_pend.first.insert(std::lower_bound(mainChain_pend.first.begin(), \
            mainChain_pend.first.end(), __get_value_at(mainChain_pend.second, top)), __get_value_at(mainChain_pend.second, top));
        }
        while (j < top && j < pendSize)
        {
            mainChain_pend.first.insert(std::lower_bound(mainChain_pend.first.begin(), \
            mainChain_pend.first.end(), *pend_it), *pend_it);
            j++;
            pend_it++;
        }
        if (j_size == 0)
            break;
        pend_it++;
        j++;
        i++;   
        if (i < j_size)    
            top = jacobsthalnumber[i];
    }
    return mainChain_pend.first;
}

std::list<unsigned int> __fordJohnson_sort_list(char **av)
{
    std::pair<std::list<unsigned int>, std::list<unsigned int> > mainChain_pend;
    std::list<std::pair<unsigned int, unsigned int> > pairlst;
    std::list<unsigned int> lst;
    unsigned int struggler;
    bool check  = false;
    if (__getContainers(lst, av))
    {
        if (lst.size() % 2 != 0)
        {
            check = true;
            struggler = lst.back();
            lst.pop_back();
        }
        pairlst = __getPairList(lst);
        __recursivelysort_List(pairlst);
        mainChain_pend = __get_mainChain_pend(pairlst);
        lst = __sort_list(jacobsthalNumbers(mainChain_pend.second.size()), mainChain_pend, lst);
        if (check)
            lst.insert(std::lower_bound(lst.begin(), lst.end(), struggler), struggler);
        return lst;
    }
    return std::list<unsigned int>();
}