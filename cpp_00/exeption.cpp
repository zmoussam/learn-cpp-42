#include<iostream>
#include<string>
#include<cassert>

int main()
{
    // assert(<zxpression> && <message>) exp: asser(level > 0 && "invalide level !")
    try
    {
        throw std::invalid_argument("Mince !");
        throw std::exception();
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }  
}