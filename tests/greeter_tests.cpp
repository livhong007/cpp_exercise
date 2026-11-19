#include "app/greeter.hpp"

#include <iostream>
#include <string>

import app.cppm_example;

int main() {
    const std::string result = app::greet("World");
    if (result != "Hello, World!") {
        std::cerr << "Expected 'Hello, World!', got '" << result << "'\n";
        return 1;
    }

    if (std::string{app::cppm_example::greeting()} != "Hello from a C++ module!") {
        std::cerr << "The C++ module example returned an unexpected greeting\n";
        return 1;
    }

    std::cout << "All tests passed\n";
    return 0;
}
