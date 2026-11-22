#include "app/greeter.hpp"
#include <iostream>
#include <vector>

#include "codility_test/binary_gap.hpp"
#include "codility_test/array_list.hpp"

int main() {
    std::cout << app::greet("C++20") << '\n';
    std::cout << "Maximum binary gap for 1041: " << solution_binary_gap(1041) << '\n';
    std::vector<int> A{1, 4, -1, 3, 2};
    std::cout << "Length of the array list: " << solution(A) << '\n';
    return 0;
}
