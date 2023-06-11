/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:03:43 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/11 13:46:54 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
                                                            
    int size = 2;                     
    Animal* animals[size];
    for (int i = 0 ; i < size ; i++)
    {
        if (i < (size / 2))
            animals[i] = new Cat();
        else 
            animals[i] = new Dog();
    }
    for (int i = 0 ; i < size ; i++){
        delete animals[i];
    }
    
    // std::string *catIdeas = new std::string[100];                   // test the deep copy and shallow copy
    // catIdeas[0] = "cat idea : (i want to eat)";
    // std::string *dogIdeas = new std::string[100];;
    // dogIdeas[0] = "dog idea : (i want to bark)";
    
    // Brain *catBrain = new Brain();
    // Brain *dogBrain = new Brain();

    // catBrain->setIdeas(catIdeas);
    // dogBrain->setIdeas(dogIdeas);
    
    // Cat *cat = new Cat();
    // cat->setBrain(catBrain);    
    // Cat *copyCat = new Cat(*cat);
    
    // Dog *dog = new Dog();
    // dog->setBrain(dogBrain);
    // Dog *copyDog = new Dog(*dog);
    

    // std::cout << cat->getBrain()->getIdeas()[0] << std::endl;
    // std::cout << copyCat->getBrain()->getIdeas()[0] << std::endl;
    // std::cout << dog->getBrain()->getIdeas()[0] << std::endl;
    // std::cout << copyDog->getBrain()->getIdeas()[0] << std::endl;
    
    // catIdeas[0] = "no idea";
    // dogIdeas[0] = "no idea";
    // catBrain->setIdeas(catIdeas);
    // dogBrain->setIdeas(dogIdeas);
    
    // std::cout << cat->getBrain()->getIdeas()[0] << std::endl;
    // std::cout << copyCat->getBrain()->getIdeas()[0] << std::endl;
    // std::cout << dog->getBrain()->getIdeas()[0] << std::endl;
    // std::cout << copyDog->getBrain()->getIdeas()[0] << std::endl;

    // delete cat;
    // delete copyCat;
    // delete dog;
    // delete copyDog;

    
    return 0;
}