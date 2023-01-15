#ifndef __WINDOW__
#define __WINDOW__

#include<string>

class Window
{
    public: 
        Window() = default;
        Window(std::string t);
        void run() const noexcept;

    private:
        std::string title;
};
#endif