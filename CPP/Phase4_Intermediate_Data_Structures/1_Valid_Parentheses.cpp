/*
 * Problem: Valid Parentheses
 * Difficulty: Easy/Medium
 *
 * Description:
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 * An input string is valid if:
 * 1. Open brackets must be closed by the same type of brackets.
 * 2. Open brackets must be closed in the correct order.
 * Example: "()[]{}" -> True, "(]" -> False
 *
 * Explanation:
 * This is a classic Stack problem.
 * 1. Iterate through the string.
 * 2. If we encounter an opening bracket, push it onto the stack.
 * 3. If we encounter a closing bracket:
 *    - Check if the stack is empty (invalid case).
 *    - Check if the top of the stack is the matching opening bracket.
 *    - If it matches, pop from the stack. If not, it's invalid.
 * 4. After the loop, if the stack is empty, the string is valid.
 *
 * Time Complexity: O(n) - We traverse the string once.
 * Space Complexity: O(n) - In the worst case (all open brackets), the stack holds n characters.
 *
 * Q&A:
 * Q: Why use a Stack?
 * A: Because the last opened bracket must be the first one closed (LIFO property).
 */

#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

bool isValid(string s) {
    // TODO: Implement using a Stack to check for valid parentheses
    return false;
}

int main() {
    string s1 = "()[]{}";
    string s2 = "(]";
    string s3 = "([)]";

    cout << "Input: " << s1 << " | Valid: " << (isValid(s1) ? "True" : "False") << endl;
    cout << "Input: " << s2 << " | Valid: " << (isValid(s2) ? "True" : "False") << endl;
    cout << "Input: " << s3 << " | Valid: " << (isValid(s3) ? "True" : "False") << endl;

    return 0;
}
