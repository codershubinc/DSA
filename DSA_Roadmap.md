# Data Structures and Algorithms (DSA) Roadmap with C++

This roadmap is designed to take you from a beginner to an interview-ready software developer using C++. It focuses on understanding concepts, recognizing patterns, and applying them to solve problems efficiently using the Standard Template Library (STL).

## 🏁 Phase 1: The Fundamentals

Before diving into complex structures, ensure your foundation is solid.

### 1. C++ Basics & STL Mastery

Master the syntax and the Standard Template Library (STL).

- **Core:** Pointers, References, Memory Management, Structs/Classes.
- **STL Containers:** `vector`, `string`, `pair`, `tuple`.

### 2. Time & Space Complexity (Big O Notation)

Understand how to measure the efficiency of your code.

- **Concepts:** Best, Average, Worst case.
- **Terms:** O(1), O(log n), O(n), O(n log n), O(n^2), O(2^n).
- **Practice:** Analyze simple loops and recursive functions.

---

## 🧱 Phase 2: Basic Data Structures

### 1. Arrays & Strings

The building blocks of most problems.

- **Concepts:** `std::vector` (Dynamic arrays), `std::string`, Memory layout, Iterators.
- **Key Problems:** Reverse array, Rotate array, Palindrome check, Anagrams.

### 2. Linked Lists

Understanding pointers and memory management.

- **Concepts:** Singly Linked List, Doubly Linked List, Circular Linked List.
- **Key Problems:** Reverse a linked list, Detect cycle (Floyd’s Cycle Finding), Merge two sorted lists.

---

## 🧩 Phase 3: Essential Algorithms & Patterns

### 1. Recursion

The heart of many advanced algorithms.

- **Concepts:** Base case, Recursive step, Stack overflow.
- **Key Problems:** Factorial, Fibonacci, Tower of Hanoi.

### 2. Sorting & Searching

- **Sorting:** Bubble, Selection, Insertion (Basics). **Merge Sort, Quick Sort** (Must Know).
- **STL:** `std::sort` (Introsort), `std::stable_sort`.
- **Searching:** Linear Search, **Binary Search** (Crucial).
- **STL:** `std::binary_search`, `std::lower_bound`, `std::upper_bound`.
- **Key Problems:** Binary search on answer, Search in rotated sorted array.

### 3. Common Patterns (The "Cheat Codes")

- **Two Pointers:** Used for sorted arrays/lists (e.g., Pair sum).
- **Sliding Window:** Used for subarray/substring problems (e.g., Longest substring without repeating characters).

---

## 🏗️ Phase 4: Intermediate Data Structures

### 1. Stacks & `std::stack`, `std::queue`, `std::deque`. Monotonic Stack.

- **Key Problems:** Valid Parentheses, Next Greater Element, Implement Stack using Queues.

### 2. Hashing (Hash Maps & Sets)

O(1) lookups are powerful.

- **Concepts:** `std::unordered_map`, `std::unordered_set`.(Hash Maps & Sets)
  O(1) lookups are powerful.
- **Concepts:** Hash functions, Collision resolution.
- **Key Problems:** Two Sum, Longest Consecutive Sequence, Count frequency of elements.

---

## 🌳 Phase 5: Non-Linear Data Structures

### 1. Trees

Hierarchical data.

- **Concepts:** Binary Trees, Binary Search Trees (BST).
- **STL:** `std::map`, `std::set` (Self-balancing BSTs / Red-Black Trees).
- **Traversals:** Inorder, Preorder, Postorder, Level Order.
- **Key Problems:** Height of tree, Diameter of tree, LCA (Lowest Common Ancestor), Validate BST.

### 2. Heaps / Priority Queues

Ordering elements efficiently.

- **Concepts:** Min Heap, Max Heap, Heap Sort.
- **STL:** `std::priority_queue` (Max Heap by default), `std::greater` (for Min Heap).
- **Key Problems:** Kth largest element, Merge K sorted lists, Median of data stream.

---

## 🕸️ Phase 6: Advanced Data Structures

Representation:\*\* Adjacency List (`vector<vector<int>>`), Adjacency Matrix.

- **Concepts:**

### 1. Graphs

Modeling relationships.

- **Concepts:** Adjacency Matrix vs List, BFS (Breadth-First Search), DFS (Depth-First Search).
- **Algorithms:** Dijkstra’s (Shortest Path), Prim’s/Kruskal’s (MST), Topological Sort.
- **Key Problems:** Number of Islands, Clone Graph, Course Schedule.

### 2. Tries (Prefix Trees)

Optimized for string searches.

- **Key Problems:** Implement Trie, Word Search II.

---

## 🧠 Phase 7: Advanced Algorithms

### 1. Dynamic Programming (DP)

Solving complex problems by breaking them down.

- **Concepts:** Memoization (Top-down) vs Tabulation (Bottom-up).
- **Patterns:** 1D DP (Climbing Stairs), 2D DP (Grid paths), Knapsack Pattern, Longest Common Subsequence (LCS).

### 2. Greedy Algorithms

Making the locally optimal choice.

- **Key Problems:** Activity Selection, Huffman Coding, Jump Game.

### 3. Backtracking

Exploring all possibilities.

- **Key Problems:** N-Queens, Sudoku Solver, Generate Parentheses.

---

## 🚀 Phase 8: Expert / System Design Context

For a software developer, knowing _when_ to use a structure is as important as knowing _how_.

- **Bloom Filters:** Probabilistic data structures (used in databases).
- **B-Trees / B+ Trees:** Database indexing.
- **Consistent Hashing:** Load balancing.
- **Quad Trees:** Spatial indexing (Maps).

---

## 📅 Weekly Study Plan (Example)

- **Weeks 1-2:** Language mastery & Arrays/Strings.
- **Weeks 3-4:** Linked Lists, Recursion, & Hashing.
- **Weeks 5-6:** Stacks, Queues, & Sorting/Searching.
- **Weeks 7-9:** Trees & Heaps.
- **Weeks 10-12:** Graphs & DP.
- **Week 13+:** Review, Mock Interviews, & Hard Problems.

## 📚 Resources

- **Practice Platforms:** LeetCode, HackerRank, CodeSignal.
- **Books:** "Cracking the Coding Interview", "Introduction to Algorithms (CLRS)".
- **Visualizations:** VisuAlgo.net.
