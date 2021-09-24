#include <iostream>

int main() {

    int answer = 8;

    int guess;

    std::cout << "I have chance to find what number i have stored in this program 1 - 10\n";
    std::cout << "Guess it: ";
    std::cin >> guess;

    while (guess != 8) {

        std::cout << "Wrong, try again: ";
        std::cin >> guess;

    }

    std::cout << "You got it!\n";

    return 0;

}
