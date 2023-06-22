/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:26 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/22 22:25:12 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery-form", 145, 137, false)
{
    this->target = "X-Target";
}
    
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery-form", 145, 137, false)
{
     this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{ 
    this->target = copy.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this == &copy)
        return *this;
    this->target = copy.target;
    this->signature = copy.signature;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->signature)
        throw AForm::NotSignedExcepion();
    else if (executor.getGrade() > this->executGrade)
        throw AForm::GradeTooLowException();
    else 
    {
        try
        {
            std::string file_name = this->target + "_shrubbery";
            std::ofstream shrubberyFile(file_name.c_str());
            if (!shrubberyFile.is_open()) 
                throw std::ios_base::failure("Failed to open the file.");

            std::string tree = "                                              .\n"
                    "                                   .         ;\n"
                    "        .              .              ;%     ;;\n"
                    "         ,           ,                :;%  %;\n"
                    "         :         ;                   :;%;'     .,\n"
                    ",.        %;     %;            ;        %;'    ,;\n"
                    "  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
                    "   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
                    "    ;%;      %;        ;%;        % ;%;  ,%;'\n"
                    "     `%;.     ;%;     %;'         `;%%;.%;'\n"
                    "      `:;%.    ;%%. %@;        %; ;@%;%'\n"
                    "         `:%;.  :;bd%;          %;@%;'\n"
                    "           `@%:.  :;%.         ;@@%;'\n"
                    "             `@%.  `@%%    ;@@%;'\n"
                    "               `@%%. `@%%  ;@@%;\n"
                    "                 ;@%. :@%%  %@@%;\n"
                    "                   %@bd%%%bd%%:;\n"
                    "                     #@%%%%%:;;\n"
                    "                     %@@%%%::;\n"
                    "                     %@@@%(o);  . '\n"
                    "                     %@@@o%;:(.,'\n"
                    "                 `.. %@@@o%::;\n"
                    "                    `)@@@o%::;\n"
                    "                     %@@(o)::;\n"
                    "                    .%@@@@%::;\n"
                    "                    ;%@@@@%::;.\n"
                    "                ...;%@@@@@%%:;;;;,..   \n";
            shrubberyFile << tree;
            shrubberyFile.close();
        }
        catch (const std::ios_base::failure& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
    }
}