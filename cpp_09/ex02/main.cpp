/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:03:25 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/30 23:46:59 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <list>


void printvec(std::vector<unsigned int> _vec)
{
    std::vector<unsigned int>::iterator itt = _vec.begin();
    for (; itt != _vec.end(); itt++)
    {
        std::cout << *itt << " " ;
    }
    std::cout << std::endl;
}

std::list<std::pair<unsigned int, unsigned int> > __getPairList(std::list<unsigned int> _lst)
{
    size_t j = 0;
    size_t len = _lst.size();
    std::list<std::pair<unsigned int, unsigned int> > _result(len / 2);
    std::list<unsigned int>::iterator it = _lst.begin();
    std::list<std::pair<unsigned int , unsigned int> >::iterator r_it = _result.begin();

    for (; it != _lst.end() ; it++)
    {
        if (*it < *it + 1)
        {
            r_it->second = *it;
            r_it->first = *(++it);
        }
        else
        {
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


std::list<unsigned int> __merge_insert_sort(std::vector<unsigned int> jacobsthalnumber, \
std::pair<std::list<unsigned int>, std::list<unsigned int> > mainChain_pend,\
std::list<unsigned int>)
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

std::list<unsigned int> __sort_list(char **av, double &process_time)
{
    std::pair<std::list<unsigned int>, std::list<unsigned int> > mainChain_pend;
    std::list<std::pair<unsigned int, unsigned int> > pairlst;
    std::list<unsigned int> lst;
    unsigned int struggler;
    bool check  = false;
    process_time = 0;
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
        lst = __merge_insert_sort(jacobsthalNumbers(mainChain_pend.second.size()), mainChain_pend, lst);
        if (check)
            vec.insert(std::lower_bound(vec.begin(), vec.end(), struggler), struggler);
    }
    return lst;
}

int main(int ac, char **av)
{
    std::vector<unsigned int> vec;
    std::list<unsigned int> lst;
    double vector_process;
    // double list_process;
    if (ac >= 2)
    {
        vec = __sort_vector(av, vector_process);
        printvec(vec);
        
    }
}