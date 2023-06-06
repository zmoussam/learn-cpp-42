/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:03:43 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/06 13:48:42 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
//  const Animal* j = new Dog();
//  const Animal* i = new Cat();
//  delete j;//should not create a leak
//  delete i;

    int size = 10;
    const AAnimal* animals[size];
    // AAnimal *an = new AAnimal();
    
    for (int i = 0 ; i < size ; i++)
    {
        if (i < (size / 2))
            animals[i] = new Cat();
        else 
            animals[i] = new Dog();
    }
    for (int i = 0 ; i < size ; i++)
        delete animals[i];
        
    return 0;
}