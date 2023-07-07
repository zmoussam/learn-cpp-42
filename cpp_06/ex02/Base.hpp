/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:41:41 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/07 21:50:51 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE__
#define BASE__

    class Base
    {
        public:
            Base();
            virtual ~Base();
            Base *generate(void);
            void identify(Base *p);
            void identify(Base &p);

    };

#endif