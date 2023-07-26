/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:10:53 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/26 15:01:51 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN__
#define SPAN__
#include <vector>
#include <iostream>

    class Span
    {
        private:
            unsigned int _maxSize;
            std::vector<int> _container;
        public:
            Span();
            Span(unsigned int N);
            Span(const Span &copy);
            Span &operator=(const Span &copy);
            void addNumber(int newValue);
            void addNumbers(std::vector<int>::iterator _begin, std::vector<int>::iterator _end);
            int shortestSpan();
            int longestSpan();
            void printVector();
            ~Span();
            class MaxSizeException : public std::exception 
            {
                public :
                    const char * what() const throw();
            };
            class NoSpanFound : public std::exception 
            {
                public :
                    const char * what() const throw();
            };
    };
    
#endif