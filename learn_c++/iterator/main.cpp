#include<iostream>
#include<string>
#include<vector>

int main()
{
    /*
        methodes : begin(), end()
        cbegin(), cend()
        std::next(), std::prev()
        std::rbegin(), std::rend()

        -----------------

        <iterator>    : on peut deplacer le curseur, on peut modifier lis elemants
        const <iterator> : on peut modifier les elements (di conteneur)
        <const_iterator> : on peut deplacer le curseur
        const <const_iterator> : on peut rien fais avec le iterateur  
    */
    using namespace std::literals;

    std::string sentence{"Bonjour tout le monde"s};
    std::vector<int> vec {1, 2, 3, 4, 5};

    // std::string::iterator it{std::begin(sentence)};
    std::string::const_iterator it{std::begin(sentence)}; // we cant update the value of iterator


    // std::cout << *it << std::endl;

    // it = std::end(sentence);
    // std::cout << *it << std::endl;

    std::string vec{"Bonjour"};
    for(auto it = std::begin(vec) ; it != std::end(vec) ; it  = std::next(it))
        std::cout << *it << std::endl;
    return 0;
}