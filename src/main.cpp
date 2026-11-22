#include "app/greeter.hpp"
#include <iostream>

#include "codility_test/binary_gap.hpp"

int main() {
    std::cout << app::greet("C++20") << '\n';
    std::cout << "Maximum binary gap for 1041: " << solution_binary_gap(1041) << '\n';
    return 0;
}
