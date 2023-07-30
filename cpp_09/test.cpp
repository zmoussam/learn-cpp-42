/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:13:57 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/30 02:10:51 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

// Function to calculate the Jacobsthal numbers
std::vector<int> jacobsthalNumbers(int n) {
    std::vector<int> jacobsthalSeq;
    jacobsthalSeq.push_back(0);
    jacobsthalSeq.push_back(1);
    int next_num = 0;
    while (jacobsthalSeq.back() <= n) {
        next_num = jacobsthalSeq[jacobsthalSeq.size() - 1] + 2 * jacobsthalSeq[jacobsthalSeq.size() - 2];
        if (next_num < n) {
            jacobsthalSeq.push_back(next_num);
        } else {
            break;
        }
    }
    jacobsthalSeq.push_back(next_num);
    jacobsthalSeq.erase(jacobsthalSeq.begin(), jacobsthalSeq.begin() + 3);
    return jacobsthalSeq;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "n must be non-negative." << std::endl;
        return 1;
    }

    std::vector<int> result = jacobsthalNumbers(n);

    std::cout << "Jacobsthal numbers from 0 to " << n << ":" << std::endl;
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> numbers;
//     numbers.push_back(1);
//     numbers.push_back(2);
//     numbers.push_back(4);
//     numbers.push_back(5);
//     // Determine the position where you want to add the element (e.g., in the middle)
//     size_t position = numbers.size() / 2;
    
//     // Insert the element at the specified position
//     numbers.insert(numbers.begin() + position, 3);
    
//     // Print the vector to see the updated content
//     for (size_t i = 0; i < 5 ;i++) {
//         std::cout << numbers[i] << " ";
//     }
    
//     return 0;
// }