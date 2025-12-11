/*
 * Problem: Graph BFS (Breadth-First Search)
 * Difficulty: Medium
 *
 * Description:
 * Perform a Breadth-First Search traversal on a graph starting from a source node.
 *
 * Explanation:
 * BFS explores neighbors layer by layer. It uses a Queue data structure.
 * 1. Create a boolean array 'visited' to keep track of visited nodes.
 * 2. Create a Queue and push the starting node. Mark it as visited.
 * 3. While the queue is not empty:
 *    - Dequeue a node and print it.
 *    - Iterate through its neighbors (adjacency list).
 *    - If a neighbor hasn't been visited, mark it visited and enqueue it.
 *
 * Time Complexity: O(V + E) - V is vertices, E is edges.
 * Space Complexity: O(V) - For the visited array and queue.
 *
 * Q&A:
 * Q: When should I use BFS?
 * A: Finding the shortest path in an unweighted graph, or level-order traversal.
 *
 * Q: How do we represent the graph?
 * A: Adjacency List (vector<vector<int>>) is most common and efficient for sparse graphs.
 */

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to add an edge to the graph
void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u); // Undirected graph
}

void bfs(int startNode, const vector<vector<int>>& adj, int V) {
    // TODO: Implement BFS using a Queue and Visited array
}

int main() {
    int V = 5; // Number of vertices (0 to 4)
    vector<vector<int>> adj(V);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 4);

    /*
      Graph Structure:
      0 -- 1 -- 3
      |    |
      2 -- 4
    */

    bfs(0, adj, V);

    return 0;
}
