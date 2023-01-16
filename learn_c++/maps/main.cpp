#include<iostream>
#include<string>
#include<unordered_map>
#include<map>

int main()
{
    /*
        .insert() != .erase()
        .at();
        .empty(), size()
        .contains()
    */
    std::map<int, std::string> um{{3, "Arbre"}, {1, "Maison"}, {2, "Fourchette"}};
    
    //std::unordered_map<int, std::string> um{{3, "Arbre"}, {1, "Maison"}, {2, "Fourchette"}};
    
    um[4] = "voiture";

   // um.insert({5, "wedew"}, {6, "wedwe"}); // -std==c++23
    
    std::cout << um[4] << std::endl;

    for (const auto& [key, value] : um)
        std::cout << key << " -> " << value << std::endl;
    
    return 0;
}