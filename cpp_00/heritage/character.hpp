#ifndef __CHARACTER__
    #define __CHARACTER__
    #include "Unit.hpp"
    #include <string>

    class Character : public Unit
    {
        using Unit::Unit;

        public:
            Character() = delete;
            Character(int id, const std::string& name, int level) noexcept;
            int getLevel() const;

        private:
            int _level;
    };

#endif