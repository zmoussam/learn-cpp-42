/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:36:26 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/08 14:16:55 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS__
#define UTILS__
#include <iostream>
#include <string>

    class Utils
    {
        public:
            Utils();
            ~Utils();
            Utils(const Utils &copy);
            Utils &operator=(const Utils &copy);
            static bool is_all_digits(const std::string &input);
            static bool is_fractionel(const std::string &input);
            static int countElemen(const std::string &input, const char to_cout);
    };

#endif