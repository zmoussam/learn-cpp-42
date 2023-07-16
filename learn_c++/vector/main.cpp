/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:43:18 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/16 20:54:47 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v(5);
    vector<int>::iterator it = v.begin(); // iterator

    v.push_back(60);
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl;
    cout << "max_size = " << v.max_size() << endl;
    cout << "is vide : " << v.empty() << endl;
    
    // work with iterator 
    // cout << "the second element with the iterator is : " << *it;

    // print the vector with iterator
    // for (it = v.begin() ; it != v.end() ; it++)
    //     cout << *it << endl;

    // work with auto
    v.insert(v.begin(), 12);
    v.insert(v.end()-1, 17);
     
    auto itt = v.cbegin();
    // for (; itt != v.cend(); itt++)
    //     cout << *itt << endl;
    // v.resize(3);
    // v.shrink_to_fit();// ?
    for (; itt != v.cend(); itt++)
        cout << *itt << endl;

    // for each
    sort(v.begin(), v.end()); 
    for (auto it : v )
    {
        cout << it << endl;
    }
    

}