#ifndef __QUEST__
    #define __QUEST__
    #include"queststatus.hpp"
    #include<string>

    class Quest
    {
        public:
            Quest() = delete;
            Quest(const std::string& name, const std::string& description, int unitId)
            noexcept; 
            void show() const noexcept;
        
        private:
            std::string _name;
            std::string _description;
            QuestStatus _status;
    };

#endif