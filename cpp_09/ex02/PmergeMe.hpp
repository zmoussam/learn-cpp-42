/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:03:32 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/28 22:29:44 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME__
#define PMERGEME__
#include <iostream>
#include <string>
#include <vector>
#include <list>

bool __isNumber(std::string _arg);
bool __getContainers(std::vector<unsigned int> &_vec, std::list<unsigned int> &_lst, char **av);

#endif