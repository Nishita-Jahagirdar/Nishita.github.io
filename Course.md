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
    <td>General Tree</td>
    <td>Flexibility</td>
    <td>Simple representation</td>
    <td>Not efficient for specific tasks</td>
    <td>Organization charts, file systems</td>
  </tr>
  <tr>
    <td>Binary Tree</td>
    <td>Basic hierarchical data</td>
    <td>Easy to traverse</td>
    <td>Unbalanced, inefficient</td>
    <td>Expression parsing, decision trees</td>
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
## **•	Differentiate between tree and graphs and their traversals. The applications of each**
## **•	Deliberate on sorting and searching algorithms, the technique behind each and they connect to real world**
## **•	Discuss the importance of graph algorithms with respect to spanning trees and shortest paths**
## **•	Discuss about the different studied algorithm design techniques.**
