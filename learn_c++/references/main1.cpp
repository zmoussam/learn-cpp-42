/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:15:41 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/31 16:24:48 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

void byPtr(std::string *str)
{
    *str += " and ponies";
}

void byConstPtr(std::string const *str)
{
    std::cout << *str << std::endl;
}

void byRef(std::string& str)
{
    str += " and ponies";
}

void byConstRef(const std::string & str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string str = "i like butterflies";

    std::cout << str << std::endl;
    byPtr(&str);
    byConstPtr(&str);

    str = "i like otters";
    byRef(str);
    byConstRef(str);

    return 0;
}