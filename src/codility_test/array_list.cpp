#include "codility_test/array_list.hpp"

int solution(std::vector<int> &A) {
    // Implement your solution here
    int n = A.size();
    if (n == 0) return 0;
    int max_length = 1;
    int i =0;
    while( A[i] >=0)
    {
        max_length += 1;
        i = A[i];
    }
    return max_length;
}