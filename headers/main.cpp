// include the header file to main.cpp
#include "main.h"


/* calling the first helloworld in a void func */
void firstcallbackfunction()
{
    myFirstClass obj;
    obj.myfirsthelloworld();
}

/* calling the second helloworld in a void func */
void secondcallbackfunction()
{
    myFirstClass obj;
    obj.mysecondhelloworld();
}

void banner()
{
    std::cout << "helloworld\n";
}


int main()
{
    banner();
    
    int x;
    
    std::cout << "enter a int to print two type of helloworld: ";
    std::cin >> x;
    
    if (x == 100)
    {
        firstcallbackfunction();
    } else {
        secondcallbackfunction();
    }
    
}
