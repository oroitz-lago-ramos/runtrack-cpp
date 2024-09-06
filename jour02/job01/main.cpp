#include <iostream>
#include "Pinguin.hpp"
// #include "Test.hpp"

int main() {
    std::cout << "Hello";
    Pinguin *ping = new Pinguin(5.0,1.0);
    ping->nage();
}