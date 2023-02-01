/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:21:33 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/01 21:42:39 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLASS__
    #define __CLASS__

class Sample
{
    public:
        Sample(void);        
        ~Sample(void);
        void bar(char const c) const;        
        void bar(int const i) const;        
        void bar(Sample const& S) const;        
        void bar(float const f) const;        
};

#endif