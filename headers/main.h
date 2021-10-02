#pragma once

/* includes */
#include <iostream>

/* my first class */
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

/* using this callback function we are going to call the myfirsthelloworld, mysecondhelloworld*/
void firstcallbackfunction();
void secondcallbackfunction();
