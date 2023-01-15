#ifndef __UNIT__
    #define __UNIT__
    #include<string>

    class Unit
    {
        public:
            Unit() = delete;
            Unit(int id, const std::string& name) noexcept;
            int getId() const noexcept;
            std::string getName() const noexcept;
        
        private:
            int _id;
            std::string _name;
    };

#endif