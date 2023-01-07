#include<iostream>

int main()
{
    int n{67};

    std::cout << n << std::endl;

    auto func = [&](int &n) mutable -> void {n = 68;};

    func(n);

    std::cout << n << std::endl;

    return 0;
}