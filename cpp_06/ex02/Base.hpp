/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:41:41 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/08 13:51:34 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE__
#define BASE__

    class Base
    {
        public:
            virtual ~Base();
            Base *generate(void);
            void identify(Base *p);
            void identify(Base &p);
    };

#endif