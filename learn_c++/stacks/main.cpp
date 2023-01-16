#include<iostream>
#include<string>
#include<stack>

int main()
{
    std::stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    std::cout << "size : " << st.size() << std::endl;
    std::cout << "top : " << st.top() << std::endl;

    if (st.empty())
        std::cout << "Pile vide." << std::endl;
    
    while(!st.empty())
    {
        std::cout << st.top() << "  ";
        st.pop();
    }
    std::cout << "\n" << std::endl;

    return 0;
}