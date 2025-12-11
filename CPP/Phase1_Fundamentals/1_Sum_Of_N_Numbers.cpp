/*
 * Problem: Sum of First N Natural Numbers (Time Complexity Demo)
 * Difficulty: Beginner
 *
 * Description:
 * Calculate the sum of numbers from 1 to N.
 * We will look at two approaches to understand Time Complexity.
 *
 * Approach 1: Iterative (Loop)
 * - Iterate from 1 to N and add to a sum variable.
 * - Time Complexity: O(N) - The loop runs N times.
 *
 * Approach 2: Mathematical Formula
 * - Use the formula: Sum = N * (N + 1) / 2
 * - Time Complexity: O(1) - Basic arithmetic operations, constant time.
 *
 * Q&A:
 * Q: Why is O(1) better than O(N)?
 * A: As N grows (e.g., 1 billion), O(N) takes proportional time (seconds), while O(1) is instant.
 *
 * Q: When might the formula fail?
 * A: If N is very large, N * (N + 1) might overflow the integer limit. We should use 'long long'.
 */

#include <iostream>
#include <chrono> // For measuring time

using namespace std;
using namespace std::chrono;

// O(N) Approach
long long sumIterative(int n) {
    // TODO: Implement the iterative approach using a loop
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

// O(1) Approach
long long sumFormula(int n) {
    // TODO: Implement the mathematical formula approach
    return static_cast<long long>(n) * (n + 1) / 2;
}

int main() {
    long long n = 100000000000; // 100 Billion

    cout << "Calculating sum for N = " << n << endl;

    // Measure Iterative
    auto start = high_resolution_clock::now();
    long long result1 = sumIterative(n);
    auto stop = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop - start);
    cout << "Iterative (O(N)): " << result1 << " | Time: " << duration1.count() / 1000000.0 << " seconds" << endl;

    // Measure Formula
    start = high_resolution_clock::now();
    long long result2 = sumFormula(n);
    stop = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop - start);
    cout << "Formula (O(1)):   " << result2 << " | Time: " << duration2.count() / 1000000.0 << " seconds" << endl;

    return 0;
}
