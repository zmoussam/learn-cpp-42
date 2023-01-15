#include "quest.hpp"
#include<iostream>
#include<string>

Quest::Quest(const std::string& name, const std::string& description, int unitId) 
noexcept : _name(name), _description(description)
{
    _status = QuestStatus::disabled;
}

void Quest::show() const noexcept
{
    std::cout << _name << std::endl;
    std::cout << _description << std::endl;
    
}