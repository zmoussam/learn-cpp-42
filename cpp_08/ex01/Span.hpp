/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:10:53 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/25 19:14:06 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN__
#define SPAN__

    class Span
    {
        private:
            unsigned int N;
        public:
            Span();
            Span(unsigned int N);
            Span(const Span &copy);
            Span &operator=(const Span &copy);
            void addNumber(int newValue);
            void shortestSpan();
            void longestSpan();
            
            ~Span();
    };
    
#endif