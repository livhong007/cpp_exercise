#include "codility_test/binary_gap.hpp"
int solution_binary_gap(int N) {
    // Implement your solution here
    int max_gap = 0;
    int current_gap = -1; // Start with -1 to ignore leading zeros
    while (N > 0) {
        if (N % 2 == 0) {
            if (current_gap != -1) {
                current_gap++;
            }
        } else {
            if (current_gap > max_gap) {
                max_gap = current_gap;
            }
            current_gap = 0; // Reset gap counter after finding a 1
        }
        N /= 2; // Shift right to process the next bit
    }
    return max_gap;
}
