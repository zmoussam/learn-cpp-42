/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:25:27 by zakaria           #+#    #+#             */
/*   Updated: 2023/07/13 21:35:11 by zakaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY__
#define ARRAY__

template<typename T>
    class Array
    {
        private:
            T arr;
        public:
            Array();
            Array(unsigned n);
            Array(const Array &copy);
            Array &operator=(const Array &copy);
            ~Array();
            size_t size() const;
    };
        
#endif