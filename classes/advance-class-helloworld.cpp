/**
 * this is an extra step in classes
*/


// importing iostream header file :) 
#include <iostream>

/**
 * creating a class named myClass
 */ 

class myClass {
public:
	void helloworld()
	{
		std::cout << "hello world\n";
	};
};

/**
 * calling it in another void function
 * for imporiving code clean
 */

void callbackfunction()
{
	myClass myObj;

	myObj.helloworld();
}

/**
 * calling the callbackfunction using a simple if loop
 */

int main()
{
	int x = 10;

	if (x == 10) {
		callbackfunction();
	} else {
		std::cout << "oops i cant get the class ;(\n";
	}

	return 0;
}