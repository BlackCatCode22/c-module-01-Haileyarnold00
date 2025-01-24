#include <iostream>

int main() {
    std::cout << "Hello, my friend!" << std::endl;

    std::pmr::string x;

    std::cout << "\n What is your name?";
    std::cin >>  x;

    std::cout << "\n" << x << " is such a beautiful name!";


    return 0;
}