#include "character.hpp"
#include<iostream>
#include<string>

Character::Character(int id, const std::string& name, int level) noexcept : Unit(id, name), _level(level)
{

}
int Character::getLevel() const
{
    return _level;
}