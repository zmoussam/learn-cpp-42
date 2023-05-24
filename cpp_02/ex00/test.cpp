/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:28:16 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/24 17:33:23 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

void printMemoryBits(const void* ptr, size_t size) {
    unsigned char* bytePtr = (unsigned char*)ptr;
    
    for (int i = size - 1; i >=  0 ; i--) {
        unsigned char byte = bytePtr[i];
        
        for (int j = 7; j >= 0; j--) {
            printf("%d", (byte >> j) & 1);
        }
        
        printf(" ");
    }
    
    printf("\n");
}

int main() {
    double number = 42;
    // number = number << 16;
    printMemoryBits(&number, sizeof(number));
    
    return 0;
}
// int main()
// {
//     test t;
//     test tt;
//     test ttt;

//     t.setN(1);
//     tt.setN(1);

//     ttt = tt + t;

//     std::cout << "t ==  " << t.getN() << "\ntt ==  " << tt.getN() << "\nttt == " << ttt.getN() << std::endl;

// }