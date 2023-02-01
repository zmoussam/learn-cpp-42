/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:22:11 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/01 20:56:15 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

class Student
{
    private:
        std::string _login;
    
    public:
        Student() : _login("ldefault")
        {
            std::cout << "Student " << this->_login << "is born" << std::endl;
        }
        
        Student(std::string login) : _login(login)
        {
            std::cout << "Student " << this->_login << "is born" << std::endl;
        }
        
        ~Student()
        {
            std::cout << "Student " << this->_login << " died" << std::endl;
        }      
};

int main()
{
    Student bob = Student("bfubar");
    Student * jim = new Student("jfubar");
    Student * students = new Student[42];
     
    //Do some stuff here

    delete jim; // jim is destroyed;
    delete [] students;
    
    return (0); //bob is destroyed
}