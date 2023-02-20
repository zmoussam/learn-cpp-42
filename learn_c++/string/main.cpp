#include<iostream>
#include<string>

int main()
{
    /*
        at(), front(), back()
        push_back(), pop_back(), append(), clear()
        starts_with(), ends_with(), contains()
        substr(), swap()
    */
    std::string s{"Hello World !"};
    
    std::cout << s.front() << " - " << s.back() << std::endl;
    s.append("!!!!!!!!!");  // or append(4, '!')
    std::cout << s << std::endl;

    for(const auto& c : s)
        std::cout << c << std::endl;

    if (s.ends_with('i'))
        std::cout << "OUI" << std::endl;

    if (s.contains("he")) // or s.contains("lo")
        std::cout << "OUI" << std::endl;

    std::cout << s.substr(3 , 7) << std::endl;

    std::string s1{"aaa"};
    std::string s2{"bbb"};

    std::cout << "s1 = " << s1 << std::endl; 
    std::cout << "s2 = " << s2 << std::endl;

    s1.swap(s2);

    std::cout << "s1 = " << s1 << std::endl; 
    std::cout << "s2 = " << s2 << std::endl;


    
    return 0;
}