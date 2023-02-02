/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:58:04 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/02 22:01:44 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_
    #define INTEGER_

#include<iostream>

class Integer{
    
    public:
        Integer(int const n);
        ~Integer(void);

        int     getValue() const;

        Integer &  operator=( Integer const & rhs);
        Integer operator+( Integer const & rhs) const;

    private:
        int _n;
};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);

#endif