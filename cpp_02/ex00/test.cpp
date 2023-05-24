/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:28:16 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/24 12:28:17 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

int main()
{
    test t;
    test tt;
    test ttt;

    t.setN(1);
    tt.setN(1);

    ttt = tt + t;

    std::cout << "t ==  " << t.getN() << "\ntt ==  " << tt.getN() << "\nttt == " << ttt.getN() << std::endl;

}