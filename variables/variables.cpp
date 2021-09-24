/**
 * learn to store text
*/

#include <iostream>

int main()
{
    /**
     * store a text using const char thenameofyourobject
     * i have used
     * const char helloworld[] = "hellworld\n";
     *
     * you will get a doubt why i am using []
     * [] you can store unlimited characters of text
     */

    const char helloworld[] = "hello world\n";

    /**
     * to check that it have stored correctly
     * print it out :) using std::cout
     */
    std::cout << helloworld;
}