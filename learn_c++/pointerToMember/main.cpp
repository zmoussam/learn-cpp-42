/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:19:02 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/31 15:33:09 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>

class sample
{
    public:
        void bar(void) const;
        sample(void);  
        ~sample(void);
        int foo;  
};

int main()
{
    sample   instance;
    sample   *instancep = &instance;

    int sample::*p = NULL;
    void (sample::*f)(void) const;

    p = &sample::foo;
    f = &sample::bar;
    
    std::cout << "Value of member foo: " << instance.foo << std::endl;
    instance.*p = 21;
    std::cout << "Value of member foo: " << instance.foo << std::endl;
    instancep->*p = 42;
    std::cout << "Value of member foo: " << instance.foo << std::endl;

    (instance.*f)();
    (instancep->*f)();

    return 0;
}