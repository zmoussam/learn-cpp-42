#include<iostream>
#include<string>
#include<unordered_set>
#include<set>

int main()
{
    std::set<int> s{1, 5, 3, -8};

    s.insert({9, 19, 99});
    s.erase(5);
    
    if(s.contains(19))
        std::cout << "Trouve !" << std::endl;

    return 0;
}