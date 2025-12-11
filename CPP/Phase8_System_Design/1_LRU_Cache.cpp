/*
 * Problem: LRU Cache (Least Recently Used)
 * Difficulty: Medium/Hard
 *
 * Description:
 * Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.
 * - get(key): Return value if exists, else -1.
 * - put(key, value): Update value if exists. If not, add key-value. If capacity exceeded, evict the least recently used item.
 * - Operations must be O(1).
 *
 * Explanation:
 * To achieve O(1) for both get and put, we need:
 * 1. A Hash Map (unordered_map) for O(1) access to values.
 * 2. A Doubly Linked List (std::list) to maintain the order of usage.
 *    - Most recently used items are at the front.
 *    - Least recently used items are at the back.
 *
 * The Map stores: Key -> Iterator to the List Node.
 * The List stores: {Key, Value} pairs.
 *
 * Q&A:
 * Q: Why Doubly Linked List?
 * A: We need to remove a node from the middle and move it to the front in O(1). std::list iterators allow this.
 *
 * Q: Why store the Key in the List node?
 * A: When we remove the last element (LRU) from the list, we need to know its Key to remove it from the Map as well.
 */

#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

class LRUCache {
private:
    int capacity;
    // TODO: Define data structures (List and Map)

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        // TODO: Return value if exists, move to front. Else -1.
        return -1;
    }

    void put(int key, int value) {
        // TODO: Update/Insert value. Evict if capacity exceeded.
    }
};

int main() {
    LRUCache lru(2); // Capacity 2

    lru.put(1, 1); // Cache: {1=1}
    lru.put(2, 2); // Cache: {2=2, 1=1}
    
    cout << "Get 1: " << lru.get(1) << endl; // Returns 1. Cache: {1=1, 2=2}
    
    lru.put(3, 3); // Evicts key 2. Cache: {3=3, 1=1}
    
    cout << "Get 2: " << lru.get(2) << endl; // Returns -1 (not found)
    
    lru.put(4, 4); // Evicts key 1. Cache: {4=4, 3=3}
    
    cout << "Get 1: " << lru.get(1) << endl; // Returns -1 (not found)
    cout << "Get 3: " << lru.get(3) << endl; // Returns 3
    cout << "Get 4: " << lru.get(4) << endl; // Returns 4

    return 0;
}
