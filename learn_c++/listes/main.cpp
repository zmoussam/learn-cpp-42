#include<iostream>
#include<string>
#include<list>

int main()
{
    /*
        front(), back(), size(), empty()
        push_back(), push_front(), insert()
        pop_front(), pop_back(), clear()
    */
    std::list<std::string> li{"wedew", "wee"};

    li.push_back("castor");
    li.push_front("barrage");

    li.pop_front();
    li.pop_back();
    std::cout << "size : " << li.size() << std::endl;

    if(li.empty())
        std::cout << "Liste vide" << std::endl;

    li.reverse();
    
    for(const auto& element : li)
        std::cout << element << std::endl;

    return 0;
}