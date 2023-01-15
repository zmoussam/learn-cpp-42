#include "unit.hpp"
#include<iostream>
#include<string>

Unit::Unit(int id, const std::string& name) noexcept : _id(id), _name(name)
{

}

int Unit::getId() const noexcept
{
    return this->_id;
}

std::string Unit::getName() const noexcept
{
    return this->_name;
}