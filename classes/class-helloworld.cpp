/**
 * learn to create classes
 */

#include <iostream>

/**
 * my hello world class
 */

class HelloWorld 
{
public:
	void hellowrld()
	{
		std::cout << "hello world\n";
	};
};

int main()
{
	/* calling the class */
	
	HelloWorld obj;

	obj.hellowrld();

	return 0;
}