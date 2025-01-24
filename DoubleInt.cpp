#include <iostream>


int main() {
    std::cout << "Hello, World!" << std::endl;

int x;

    std::cout << "Type a number:";
    std::cin >> x; // Get user input from the keyboard

    int y = x * x;

    std::cout << "Your number is: " << y; // Display the input value

    return 0;
}