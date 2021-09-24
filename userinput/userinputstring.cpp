/**
 * learn to get user input
 */

#include <iostream>
#include <string>

int main()
{
    // you can store upto 20 names
    std::string names[20];

    std::cout<<"Enter Your First Name :";
    std::cin>>names[0];

    std::cout<<"Enter Your Second Name :";
    std::cin>>names[1];

    std::cout << names[0] << " " << names[1];
    return 0;
}