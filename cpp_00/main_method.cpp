#include"methode.hpp"
#include<iostream>

int main()
{
    Window app{"Mon programme GUI"};

    std::cout << app.getTitle() << std::endl;
    app.run();
    app.setTitle("Mon nouveau titlet");
    std::cout << app.getTitle() << std::endl;

    return 0;
}