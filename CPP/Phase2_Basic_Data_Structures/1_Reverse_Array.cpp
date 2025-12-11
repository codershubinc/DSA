/*
 * Problem: Reverse an Array
 * Difficulty: Easy
 *
 * Description:
 * Given an array (or vector), reverse the order of elements.
 * Example: Input: [1, 2, 3, 4, 5] -> Output: [5, 4, 3, 2, 1]
 *
 * Explanation:
 * We can use the "Two Pointers" approach.
 * 1. Initialize two pointers: 'start' at the beginning (index 0) and 'end' at the last index (n-1).
 * 2. Swap the elements at 'start' and 'end'.
 * 3. Increment 'start' and decrement 'end'.
 * 4. Repeat until 'start' >= 'end'.
 *
 * Time Complexity: O(n) - We visit each element once.
 * Space Complexity: O(1) - We modify the array in-place.
 *
 * Q&A:
 * Q: Can we use a built-in function?
 * A: Yes, std::reverse(vec.begin(), vec.end()) in C++ STL does exactly this.
 *
 * Q: What if the array is empty?
 * A: The loop condition (start < end) handles this naturally; the loop won't execute.
 */

#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

using namespace std;

void reverseArray(vector<int>& arr) {
    // TODO: Implement the Two Pointers approach to reverse the array in-place
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    cout << "Original Array: ";
    printArray(arr);

    reverseArray(arr);

    cout << "Reversed Array: ";
    printArray(arr);

    return 0;
}
