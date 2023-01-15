#ifndef __WINDOW__
#define __WINDOW__

#include<string>

class Window
{
    public: 
        Window() = default;
        Window(std::string t);
        void run() const noexcept;
        std::string getTitle();
        void setTitle(std::string title);

    private:
        std::string title;
};
#endif