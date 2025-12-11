/*
 * Problem: Binary Tree Traversals
 * Difficulty: Easy
 *
 * Description:
 * Implement Inorder, Preorder, and Postorder traversals for a Binary Tree.
 *
 * Explanation:
 * - Preorder (Root, Left, Right): Used to create a copy of the tree.
 * - Inorder (Left, Root, Right): Gives nodes in non-decreasing order for BST.
 * - Postorder (Left, Right, Root): Used to delete the tree (delete children before parent).
 *
 * Time Complexity: O(N) - We visit every node exactly once.
 * Space Complexity: O(H) - H is the height of the tree (recursion stack).
 *
 * Q&A:
 * Q: What is the difference between DFS and these traversals?
 * A: These traversals ARE types of DFS (Depth First Search).
 *
 * Q: How do I represent a Tree node in C++?
 * A: Use a struct or class with a value and pointers to left and right children.
 */

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void preorderTraversal(TreeNode* root) {
    // TODO: Implement Preorder Traversal (Root -> Left -> Right)
}

void inorderTraversal(TreeNode* root) {
    // TODO: Implement Inorder Traversal (Left -> Root -> Right)
}

void postorderTraversal(TreeNode* root) {
    // TODO: Implement Postorder Traversal (Left -> Right -> Root)
}

int main() {
    /*
        Constructing Tree:
             1
           /             2     3
         /         4   5
    */
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Preorder (Root-Left-Right): ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder (Left-Root-Right): ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder (Left-Right-Root): ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
