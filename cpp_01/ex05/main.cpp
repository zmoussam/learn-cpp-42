/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:01:21 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 18:29:51 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Harl.hpp"

int main()
{
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("ERROR");
    harl.complain("WARNING");
    harl.complain("INFO");
    harl.complain("");
}