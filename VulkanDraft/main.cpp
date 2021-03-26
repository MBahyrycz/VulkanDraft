#include "TriangleApp.h"

#include <stdexcept>
#include <iostream>


int main() {
   
    TriangleApp app;

    try {
        app.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    std::cin.get();
    return EXIT_SUCCESS;
}