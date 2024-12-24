## **•	What are the kinds of problems we see in the nature? (iteration, recursion, backtracking)**

1.	**Iteration:** Repeats a block of code over a sequence or until a condition is met. 
Examples:
- Calculating the sum of numbers in a list using a for loop.
- Printing the first 10 Fibonacci numbers using a while loop.
2.	**Recursion:** A function calls itself to solve smaller instances of the same problem until a base condition is met.
Examples:
-	Calculating the factorial of a number (e.g., factorial(5) = 5 * factorial(4)).
-	Solving the Towers of Hanoi problem with multiple disks.
3.	**Backtracking:** A technique to solve problems by exploring all possibilities and backtracking when a solution path fails.
Examples:
-	Solving a Sudoku puzzle by trying numbers in empty cells and reverting if they lead to a conflict.
-	Finding all paths in a maze by moving in possible directions and backtracking when hitting a dead end.

## **•	What is space and time efficiency? Why are they important? Explain the different class of problems and orders of growth**

1. **Space Efficiency:** How much memory an algorithm needs to run.
2. **Time Efficiency:** How much time An algorithm takes to finish. <br>

### **-> Importance:**
- **Save Resources:** Less memory and time make programs run better.
- **Handle Large Data:** Efficient algorithms can deal with big inputs without crashing or slowing down.
- **Better User Experience:** Faster apps and programs are more enjoyable to use.
- **Energy Saving:** Uses less power, especially for mobile devices. <br>

### **-> Types of Problems:**
- **P Problems:** Easy to solve quickly, like sorting or searching.
- **NP Problems:** Hard to solve but easy to check if a solution is correct, like solving puzzles.
- **NP-hard:** Super tough problems that are at least as hard as NP problems.
- **NP-complete:** The hardest problems in NP that are hard to solve and hard to check.

### **-> Orders of Growth:**
  <table border="1">
  <tr>
    <th>Order of Growth</th>
    <th>Description</th>
    <th>Example</th>
  </tr>
  <tr>
    <td>O(1) - Constant</td>
    <td>Takes the same time no matter the input size.</td>
    <td>Checking the first item in a list.</td>
  </tr>
  <tr>
    <td>O(log n) - Logarithmic</td>
    <td>Fast, like dividing the problem into smaller parts.</td>
    <td>Binary search.</td>
  </tr>
  <tr>
    <td>O(n) - Linear</td>
    <td>Grows directly with the input size.</td>
    <td>Scanning a list.</td>
  </tr>
  <tr>
    <td>O(n log n) - Linearithmic</td>
    <td>A bit slower but common for sorting.</td>
    <td>Merge sort.</td>
  </tr>
  <tr>
    <td>O(n²) - Quadratic</td>
    <td>Slow for large inputs.</td>
    <td>Nested loops.</td>
  </tr>
  <tr>
    <td>O(2ⁿ) - Exponential</td>
    <td>Very slow, grows quickly.</td>
    <td>Solving a maze with all paths.</td>
  </tr>
  <tr>
    <td>O(n!) - Factorial</td>
    <td>Super slow for even small inputs.</td>
    <td>Checking all possible orders of items.</td>
  </tr>
</table>

## **•	Take away from different design principles from chapter 2 (can use the notes provided)**

### 1. Divide and Conquer
Break the problem into smaller, independent subproblems.<br>
Combine the solutions of subproblems to solve the original problem.<br>
**Examples:** Merge Sort, Quick Sort.
### 2. Greedy Algorithms
Make the best possible choice at each step.<br>
Works well for problems with **greedy-choice property** and **optimal substructure**.<br>
**Examples:** Dijkstra’s Algorithm, Kruskal’s Algorithm.
### 3. Dynamic Programming (DP)
Solve overlapping subproblems and store results to avoid redundant work.<br>
Efficiently reduces exponential problems to polynomial time.<br>
**Examples:** Warshall's Algorithm.
### 4. Backtracking
Explore all possibilities, and backtrack if a solution doesn’t work.<br>
Often used for constraint satisfaction problems.<br>
**Examples:** N-Queens Problem.
### 5. Transform and Conquer
Simplify the problem or its representation to solve it more easily.<br>
Highlights the importance of preprocessing.<br>
**Examples:** AVL Tree.

## **•	The hierarchical data and how different tree data structures solve and optimize over the problem scenarios (tree, bst, avl, 2-3, red-black, heap, trie)**
<table border="1">
  <tr>
    <th>Tree Type</th>
    <th>Optimized For</th>
    <th>Key Strength</th>
    <th>Limitation</th>
    <th>Use Case</th>
  </tr>
  <tr>
    <td>Binary Search Tree (BST)</td>
    <td>Sorted data storage</td>
    <td>Fast lookups, inserts</td>
    <td>Can become unbalanced</td>
    <td>Databases, sorted data</td>
  </tr>
  <tr>
    <td>AVL Tree</td>
    <td>Strict balance</td>
    <td>Guaranteed \(O(\log n)\) operations</td>
    <td>Slightly slower insertions</td>
    <td>Databases, applications needing fast searches</td>
  </tr>
  <tr>
    <td>2-3 Tree</td>
    <td>Balanced multiway search</td>
    <td>Good for disk-based systems</td>
    <td>Complex implementation</td>
    <td>File systems, databases</td>
  </tr>
  <tr>
    <td>Red-Black Tree</td>
    <td>Balanced with flexibility</td>
    <td>Faster insert/delete than AVL</td>
    <td>Slightly slower lookups</td>
    <td>Java TreeMap, C++ STL maps</td>
  </tr>
  <tr>
    <td>Heap</td>
    <td>Priority data</td>
    <td>Fast min/max operations</td>
    <td>Not efficient for search</td>
    <td>Priority queues, scheduling</td>
  </tr>
  <tr>
    <td>Trie</td>
    <td>Prefix-based operations</td>
    <td>Fast string retrieval</td>
    <td>High space usage</td>
    <td>Autocomplete, dictionaries</td>
  </tr>
</table>


## **•	The need of array query algorithms and their implications. Their applications and principles need to be discussed**
**Need for Array Query Algorithms:** They allow efficient operations (like sum, min, max, or range queries) on arrays, optimizing performance and reducing computation time, especially for large datasets.

### **Implications:**
**- Improved Efficiency:** Faster query answers, reducing time complexity.<br>
**- Real-time Processing:** Crucial for applications needing quick data access.<br>
**- Memory Usage:** Some algorithms need extra space for optimization.<br>

### **Applications:**
**- Range Queries:** Sum, min, max queries on subarrays.<br>
**- Dynamic Programming:** Storing results for fast access.<br>
**- Computational Geometry:** Range-based geometric queries.<br>

### **Principles:**
**- Preprocessing:** Prepare data for quick querying.<br>
**- Divide and Conquer:** Break problems into smaller parts.<br>
**- Time vs Space Trade-off:** Optimizing time at the cost of extra space.<br>

## **•	Differentiate between tree and graphs and their traversals. The applications of each**

### **-> Difference between Tree and Graph:**
<table border="1">
  <tr>
    <th>Aspect</th>
    <th>Tree</th>
    <th>Graph</th>
  </tr>
  <tr>
    <td><b>Definition</b></td>
    <td>A tree is a hierarchical structure with a single root and no cycles.</td>
    <td>A graph is a collection of nodes (vertices) connected by edges, and can have cycles.</td>
  </tr>
  <tr>
    <td><b>Edges</b></td>
    <td>Each node has at most one parent.</td>
    <td>A node can have multiple edges (including self-loops).</td>
  </tr>
  <tr>
    <td><b>Connections</b></td>
    <td>Only one path exists between any two nodes.</td>
    <td>Multiple paths can exist between nodes.</td>
  </tr>
  <tr>
    <td><b>Cycle</b></td>
    <td>No cycles.</td>
    <td>Can have cycles (cyclic graph) or be acyclic (acyclic graph).</td>
  </tr>
  <tr>
    <td><b>Root</b></td>
    <td>Has one root node.</td>
    <td>No specific root node (except in Directed Acyclic Graphs, DAGs).</td>
  </tr>
  <tr>
    <td><b>Types</b></td>
    <td>Binary Tree, AVL Tree, Binary Search Tree, etc.</td>
    <td>Directed Graph, Undirected Graph, Weighted Graph, etc.</td>
  </tr>
</table>

<br>

### **-> Difference between their traversals:**
<table border="1">
  <tr>
    <th>Traversal Type</th>
    <th>Tree Traversals</th>
    <th>Graph Traversals</th>
  </tr>
  <tr>
    <td><b>Inorder Traversal</b></td>
    <td>Left, Root, Right. Often used in Binary Search Trees to get sorted order.</td>
    <td>Not applicable (used in tree-specific structure).</td>
  </tr>
  <tr>
    <td><b>Preorder Traversal</b></td>
    <td>Root, Left, Right. Used for creating a copy of a tree or pre-order processing.</td>
    <td>Not applicable (used in tree-specific structure).</td>
  </tr>
  <tr>
    <td><b>Postorder Traversal</b></td>
    <td>Left, Right, Root. Used for deleting or freeing memory, or post-order evaluations.</td>
    <td>Not applicable (used in tree-specific structure).</td>
  </tr>
  <tr>
    <td><b>Level Order Traversal</b></td>
    <td>Nodes are traversed level by level (implemented using a queue).</td>
    <td>Not applicable (used in tree-specific structure).</td>
  </tr>
  <tr>
    <td><b>Depth-First Search (DFS)</b></td>
    <td>Not applicable (used in graph traversal).</td>
    <td>Explores as far as possible down each branch before backtracking (used in tasks like cycle detection, pathfinding).</td>
  </tr>
  <tr>
    <td><b>Breadth-First Search (BFS)</b></td>
    <td>Not applicable (used in graph traversal).</td>
    <td>Explores all neighbors level by level. Used for shortest path finding, network broadcasting.</td>
  </tr>
</table>

<br>

### **-> Applications of Tree and Graph:**
<table border="1">
  <tr>
    <th>Application</th>
    <th>Tree Applications</th>
    <th>Graph Applications</th>
  </tr>
  <tr>
    <td><b>Expression Representation</b></td>
    <td>Expression trees represent mathematical expressions for evaluation.</td>
    <td>Not typically used in expression representation.</td>
  </tr>
  <tr>
    <td><b>Hierarchical Data</b></td>
    <td>Used in organizational charts, file systems, or family trees.</td>
    <td>Can represent complex relationships in networks, like social media or transport systems.</td>
  </tr>
  <tr>
    <td><b>File Systems</b></td>
    <td>File systems use tree structures to represent directories and files.</td>
    <td>Graph representation can be used for more complex, non-hierarchical connections (like web links).</td>
  </tr>
  <tr>
    <td><b>Database Indexing</b></td>
    <td>Databases use tree structures like B-trees for fast searching and indexing.</td>
    <td>Graphs are used for representing and querying relationships in databases (e.g., social graphs, RDF graphs).</td>
  </tr>
  <tr>
    <td><b>Routing Algorithms</b></td>
    <td>Not typically used in routing.</td>
    <td>Used in network routing algorithms (e.g., Dijkstra’s for shortest path). Nodes are routers or network devices.</td>
  </tr>
  <tr>
    <td><b>Social Networks</b></td>
    <td>Not commonly used in social networks.</td>
    <td>Nodes represent users, and edges represent relationships (e.g., friends, followers).</td>
  </tr>
  <tr>
    <td><b>Pathfinding</b></td>
    <td>Not commonly used for pathfinding.</td>
    <td>Graphs are commonly used for pathfinding (e.g., GPS navigation, game AI).</td>
  </tr>
</table>

## **•	Deliberate on sorting and searching algorithms, the technique behind each and they connect to real world**

### **Sorting Algorithms**

**- Bubble Sort** <br>
**Description:** Swaps adjacent elements until sorted. <br>
**Complexity:** O(n²) <br>
**Use:** Small datasets

**- Insertion Sort** <br>
**Description:** Builds the sorted list one element at a time. <br>
**Complexity:** O(n²) <br>
**Use:** Nearly sorted datasets

**- Selection Sort** <br>
**Description:** Selects the smallest element from the unsorted part and places it in the sorted part. <br>
**Complexity:** O(n²) <br>
**Use:** Small datasets with minimal memory swaps needed

**- Merge Sort** <br>
**Description:** Divides and merges sublists. <br>
**Complexity:** O(n log n) <br>
**Use:** Large-scale data

**- Quick Sort** <br>
**Description:** Partitions around a pivot and sorts. <br>
**Complexity:** O(n log n) (average) <br>
**Use:** General-purpose sorting

**- Heap Sort** <br>
**Description:** Sorts by using a binary heap. <br>
**Complexity:** O(n log n) <br>
**Use:** Accessing max/min values

### **Searching Algorithms**

**- Linear Search** <br>
**Description:** Checks each element. <br>
**Complexity:** O(n) <br>
**Use:** Small or unsorted datasets

**- Binary Search** <br>
**Description:** Divides sorted list in half. <br>
**Complexity:** O(log n) <br>
**Use:** Sorted data

**- Hashing** <br>
**Description:** Uses a hash function for fast lookups. <br>
**Complexity:** O(1) (avg) <br>
**Use:** Databases and caches

**- DFS (Depth-First Search)** <br>
**Description:** Explores deeply along branches. <br>
**Complexity:** O(V + E) <br>
**Use:** AI, network routing

**- BFS (Breadth-First Search)** <br>
**Description:** Explores all neighbors at current depth. <br>
**Complexity:** O(V + E) <br>
**Use:** Shortest path, GPS

## **•	Discuss the importance of graph algorithms with respect to spanning trees and shortest paths**

**- Spanning Trees:** Used to connect all nodes in a graph efficiently with minimal cost (e.g., in network design). Algorithms like Kruskal’s and Prim’s help find the Minimum Spanning Tree.<br>
**- Shortest Paths:** Help find the quickest route between nodes (e.g., in GPS systems). Algorithms like Dijkstra’s and Bellman-Ford optimize navigation and network routing.

## **•	Discuss about the different studied algorithm design techniques.**

**- Divide and Conquer:** Split problems into smaller parts, solve them, and combine (e.g., Merge Sort, Binary Search).<br>
**- Dynamic Programming:** Solve overlapping subproblems and store results to avoid repetition (e.g., Knapsack, LCS).<br>
**- Greedy:** Make locally optimal choices for a global solution (e.g., Kruskal’s, Huffman Encoding).<br>
**- Backtracking:** Explore all possibilities and backtrack when constraints fail (e.g., N-Queens, Sudoku).<br>
**- Branch and Bound:** Systematically explore solutions, pruning unviable paths (e.g., Traveling Salesman).<br>
**- Randomized Algorithms:** Use random choices for simplicity and efficiency (e.g., Randomized Quick Sort).
