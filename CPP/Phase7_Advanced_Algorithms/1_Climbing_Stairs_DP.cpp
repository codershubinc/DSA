/*
 * Problem: Climbing Stairs (Dynamic Programming)
 * Difficulty: Easy
 *
 * Description:
 * You are climbing a staircase. It takes n steps to reach the top.
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 *
 * Explanation:
 * This is a classic DP problem, essentially the Fibonacci sequence.
 * - To reach step i, you could have come from step (i-1) (1 step jump) or step (i-2) (2 step jump).
 * - Ways(i) = Ways(i-1) + Ways(i-2).
 * - Base cases: Ways(1) = 1, Ways(2) = 2.
 *
 * Time Complexity: O(N) - We calculate each step once.
 * Space Complexity: O(1) - We only need to store the previous two values (optimized from O(N)).
 *
 * Q&A:
 * Q: Why is this Dynamic Programming?
 * A: Because we break the problem into overlapping subproblems and store/reuse results.
 */

#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n) {
    // TODO: Implement using Dynamic Programming (or Fibonacci logic)
    return 0;
}

int main() {
    int n = 5;
    cout << "Ways to climb " << n << " stairs: " << climbStairs(n) << endl;
    
    // Example trace for n=5:
    // 1, 2, 3, 5, 8
    
    return 0;
}
