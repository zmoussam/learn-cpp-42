#include<iostream>
#include<vector>
#include<algorithm>


/*
    std::fill()
    std::equal()
    std::find()
    std::search()
    std::count()
    std::sort()
    std::reverse()
    std::replace()
    std::erase() 
    std::swap()
    std::for_each(), std::all_of(), std::any_of(), none_of() 
*/

void print_elements(int n)
{
    std::cout << n << std::endl;
}

bool is_pair(int n)
{
    return n % 2 == 0;
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::vector<int> vec_one{1, 2, 3, 4, 5};
    std::vector<int> vec_two{1, 2, 3, 4, 5};

    for(const auto& e : vec)
        std::cout << e << std::endl;
    
   // std::fill(std::begin(vec), std::end(vec), 0);

    for(const auto& e : vec)
        std::cout << e << std::endl;

    if(std::equal(std::begin(vec_one), std::end(vec_one), std::begin(vec_two), std::end(vec_two)))
        std::cout << "oui !" << std::endl;

    auto begin = std::begin(vec);
    auto end = std::end(vec);

    if(std::find(begin, end, 5) != end)
        std::cout << "oui !" << std::endl;
    
    std::string s{"Bonjour"};
    std::string search_term{"jour"};

    auto s_begin = std::begin(s);
    auto s_end = std::end(s);
    auto search_begin = std::begin(search_term);
    auto search_end = std::end(search_term);

    if(std::search(s_begin, s_end, search_begin, search_end) != s_end)
        std::cout << "oui !" << std::endl;

    std::cout << std::count(std::begin(s), std::end(s), 'o') << "  = nomber de o dans s" << std::endl;

    std::vector<int> l{4, 4, 5, 6, 1, 0};
    std::sort(std::begin(l), std::end(l));
    std::reverse(std::begin(l), std::end(l));

    for(const auto& e : l)
        std::cout << e << std::endl;

    int a{5};
    int b{4};

    std::cout << "a = " << a << "/ b =  " << b << std::endl;
    std::swap(a, b);
    std::cout << "a = " << a << "/ b =  " << b << std::endl;

    std::vector<int> vecc{2, 2, 2, 4, 2, 2};
    std::for_each(std::begin(vecc), std::end(vecc), print_elements);

    std::cout << std::all_of(std::begin(vecc), std::end(vecc), is_pair) << std::endl;

    return 0;
}