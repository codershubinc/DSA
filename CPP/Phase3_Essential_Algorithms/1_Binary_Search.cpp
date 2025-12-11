/*
 * Problem: Binary Search
 * Difficulty: Easy
 *
 * Description:
 * Given a sorted array of integers and a target value, return the index of the target.
 * If the target is not found, return -1.
 * Example: Input: nums = [-1, 0, 3, 5, 9, 12], target = 9 -> Output: 4
 *
 * Explanation:
 * Since the array is sorted, we can eliminate half of the search space in each step.
 * 1. Initialize 'low' = 0 and 'high' = n-1.
 * 2. Calculate 'mid' = low + (high - low) / 2.
 * 3. If arr[mid] == target, return mid.
 * 4. If arr[mid] < target, the target must be in the right half. Set low = mid + 1.
 * 5. If arr[mid] > target, the target must be in the left half. Set high = mid - 1.
 * 6. Repeat until low > high.
 *
 * Time Complexity: O(log n) - The search space is halved every iteration.
 * Space Complexity: O(1) - Iterative approach uses constant extra space.
 *
 * Q&A:
 * Q: Why calculate mid as low + (high - low) / 2 instead of (low + high) / 2?
 * A: (low + high) can overflow if low and high are large integers. The former is safer.
 *
 * Q: Does Binary Search work on unsorted arrays?
 * A: No, the array MUST be sorted. If it's not, you must sort it first (O(n log n)).
 */

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& nums, int target) {
    // TODO: Implement Binary Search logic here
    // Return the index of target, or -1 if not found
    return -1;
}

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int result = binarySearch(nums, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
