#include<iostream>
#include<string>
#include<array>
#include<vector>

int main()
{

    /*
        std::array< , > arr{};
        arr.size(); arr.at(); arr.fill();
        arr.empty() ; arr.front(); arr.back()

        std::vector< , > 
        push_back(), pop_back(), clear()
        -------------------

        std::empty(); std::size()
    */
    // std::array<int, 5> arr{1, 2, 3, 4, 5};

    // // for(const auto& element : arr)
    // //     std::cout << element << std::endl;
    
    // std::cout << arr[0] << std::endl;
    // arr[0] = 10;
    // std::cout << arr[0] << std::endl << std::endl;

    // // arr.fill(2); 
    // int i;
    // for(size_t i{0} ; i < arr.size() ; ++i)
    //     std::cout << arr[i] << std::endl;

    // // std::cout << "Taille : " << arr.size() << std::endl;
    // // std::cout << "Taille : " << std::size(arr) << std::endl;
   
    // // if(std::empty(arr))
    // //     std::cout << "OUI" << std::endl;
    // // else
    // //     std::cout << "NON" << std::endl;

    // std::cout << "front : " << arr.front() << "\nback : " << arr.back() << std::endl;
    // // std::cout << arr.at(0) << std::endl;

    std::vector<std::string> v_arr{};

    v_arr.push_back("Bonjour");
    std::cout << v_arr[0] << std::endl;
    v_arr.clear();
    std::cout << v_arr[0] << std::endl;

    // English en1{"Rick"};
    // English en2{"Montry"};
    // Indonesian in{"Bude"};

    // std::vector<Someone> people{};

    // people.push_back(en1);
    // people.push_back(en2);
    // people.push_back(in);

    // for(const auto& p : people)
    //     std::cout << p.sayGoodNight() << std::endl;

    return 0; 
}