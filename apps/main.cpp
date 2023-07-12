#include <iostream>
#include "hello.h"

int main(int, char**) {
    std::string helloDaniel = generateHelloString("Daniel");
    std::cout << helloDaniel << std::endl;

    return 0;
}