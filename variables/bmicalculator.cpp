#include <iostream>

int main()
{
    double height, weight, bmi;

    std::cout << "Enter your height: ";
    std::cin >> height;

    std::cout << "Enter Your Weight: ";
    std::cin >> weight;

    bmi = weight / (height * height);
    
    std::cout << "Your Body Mass Index Is: " << bmi << "\n";

    return 0;
}