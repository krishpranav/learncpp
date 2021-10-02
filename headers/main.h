#pragma once

#include <iostream>

class myFirstClass
{
public:
    void myfirsthelloworld()
    {
        std::cout << "first hello world";
    };
    
    void mysecondhelloworld()
    {
        std::cout << "second hello world";
    };
};

void firstcallbackfunction();
void secondcallbackfunction();
