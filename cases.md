# Business Cases

## 1. Prioritizing Road Repairs

### **Problem:**  
This problem arises when roads are damaged due to factors like weather, heavy traffic, wear and tear, or accidents. Roads may deteriorate over time, leading to potholes, cracks, or other hazards that require repair. Without a system in place to assess and prioritize repairs, roads that are more critical may not be fixed promptly.

### **How It Causes Problems:**  
When roads are not repaired, heavily damaged or high-traffic roads might be ignored, leading to safety hazards, traffic congestion, and accidents. Unaddressed issues can worsen, leading to more expensive repairs and longer delays. It can also disrupt daily life and affect the economy due to transportation inefficiencies.

### **Solution:**  
We can use **Merge Sort** to address this problem. The solution is to assess the severity of damage, traffic volume, and potential safety risks to prioritize repairs. Critical roads, such as those with heavy traffic or severe damage, should be addressed first. This ensures that limited resources are used effectively, reducing hazards, improving traffic flow, and lowering long-term repair costs.

## **Code:** [Merge Sort](1_merge_sort.cpp)

### **Key Aspects:**  
- **User Input:**  
  The program prompts the user to enter the number of roads and their details (name and severity of damage).  

- **Road Structure:**  
  A Road struct holds the road's name and severity.  

- **Priority Queue:**  
  Roads are stored in a priority queue, which automatically sorts them based on severity (higher severity roads come first).  

- **Sorting & Output:**  
  The roads are processed in priority order, with the most critical roads being "repaired" (printed) first.

### **Time Complexity:**  
- **Best Case:** O(n log n)  
- **Average Case:** O(n log n)  
- **Worst Case:** O(n log n)

### **Conclusion:**  
Merge Sort was used to prioritize road repairs because it provides stable, efficient sorting with **O(n log n)** complexity. It ensures roads are ordered by severity, allowing for effective allocation of resources and timely repairs.

---

## 2. Efficient Dispatch of Emergency Vehicles

### **Problem:**  
Delays in dispatching emergency vehicles occur when multiple incidents happen, causing inefficiencies.  

### **How It Causes Problems:**  
Slower response times can worsen situations and increase risks.  

### **Solution:**  
Use a **Min-Heap** to prioritize incidents by distance or urgency, ensuring faster and more efficient responses.

## **Code:** [Min Heap](min_heap.cpp)

### **Key Aspects:**  
- **Incident Struct:**  
  Represents each emergency with its distance and description.  

- **Min-Heap (Priority Queue):**  
  Ensures incidents are sorted by shortest distance first, using `greater<Incident>`.  

- **Efficient Dispatch:**  
  Closest incidents are processed and dispatched in priority order.  

- **User Input:**  
  Allows dynamic input of incidents, including distance and description.

### **Time Complexity:**  
- **Best Case:** O(n log n)  
- **Average Case:** O(n log n)  
- **Worst Case:** O(n log n)

### **Conclusion:**  
Min-Heap is used to prioritize incidents based on shortest distance, ensuring that emergency vehicles are dispatched to the closest locations first. This approach helps allocate resources effectively and ensures timely responses to critical situations.

---

## 3. Event Scheduling in Public Spaces

### **Problem:**  
In public spaces, event scheduling can lead to overlaps and confusion without an efficient system.

### **How It Causes Problems:**  
Clashing events cause logistical issues, overcrowding, and disrupt smooth operations.

### **Solution:**  
An **AVL Tree** sorts events by start time, ensuring efficient scheduling and conflict-free allocation of public spaces.

## **Code:** [AVL Tree](3_avl_tree.cpp)

### **Key Aspects:**  
- **Dynamic Scheduling:**  
  Events can be added dynamically, ensuring real-time scheduling adjustments.  

- **Conflict Detection:**  
  Overlapping events are detected and prevented to avoid scheduling conflicts.  

- **Balanced Tree Structure:**  
  The AVL Tree ensures all events are balanced, enabling efficient insertion, deletion, and retrieval operations.  

- **Sorted Order of Events:**  
  Events are automatically stored in sorted order of their start times, making it easy to visualize and manage the schedule.  

- **Scalability:**  
  The AVL Tree structure allows for efficient handling of a large number of events with minimal performance degradation.  

- **User Input Integration:**  
  The program takes event details from the user, making it interactive and adaptable to various use cases.

### **Time Complexity:**  
- **Best Case:** O(log n)  
- **Average Case:** O(log n)  
- **Worst Case:** O(log n)

### **Conclusion:**  
AVL Tree is ideal for event scheduling because it maintains a balanced structure, ensuring efficient operations like insertion and search. Its ability to automatically sort events by start time and prevent conflicts makes it a reliable choice for managing schedules in dynamic environments.

---

## 4. Sorting Building Heights for Skyline Analysis

### **Problem:**  
When analyzing the skyline of a city, determining the visible portions of buildings can become challenging due to overlapping structures of varying heights.

### **How It Causes Problems:**  
Buildings that are taller but located further back may block shorter ones in the foreground. Without proper sorting, identifying the true skyline becomes inefficient and error-prone, affecting urban planning and visualization tasks.

### **Solution:**  
Use **Quick Sort** to sort building heights efficiently by their positions and heights. This ensures that the skyline is analyzed in the correct order, enabling accurate visibility calculations.

## **Code:** [Quick Sort](4_quick_sort.cpp)

### **Key Aspects:**  
- **Building Struct:**  
  Each building has a position, height, and identifier for tracking.  

- **Sorting by Height and Position:**  
  Quick Sort ensures buildings are ordered by their position and height in descending order, which is crucial for skyline analysis.  

- **Dynamic Input:**  
  The program allows user input for building details, making it adaptable for various skyline configurations.  

- **Efficient Visualization:**  
  Sorted data helps in creating an accurate skyline representation, reducing computation during analysis.

### **Time Complexity:**  
- **Best Case:** O(n log n)  
- **Average Case:** O(n log n)  
- **Worst Case:** O(n²)

### **Conclusion:**  
Quick Sort is an optimal choice for sorting building heights because of its efficiency and ability to handle large datasets effectively. It simplifies the process of identifying the skyline by ensuring accurate order of buildings, improving clarity and visualization in urban studies.

---

## 5. Tourist Route Planning

### **Problem:**  
Planning the most efficient route for tourists to explore multiple destinations in a city or region can be challenging, especially when considering constraints like time, distance, or specific preferences.

### **How It Causes Problems:**  
Without an optimized route, tourists might waste time traveling back and forth between locations, miss important spots, or face unnecessary delays, reducing the overall experience.

### **Solution:**  
Use **Breadth-First Search (BFS)** to determine the shortest path or most efficient sequence to visit destinations. BFS can help explore all possible routes systematically and identify the optimal path based on distance or travel time.

## **Code:** [BFS](5_bfs.cpp)

### **Key Aspects:**  
- **Graph Representation:**  
  The city is represented as a graph where nodes are destinations, and edges are the connections (roads or paths) between them.

- **BFS Algorithm:**  
  BFS traverses the graph layer by layer, ensuring the shortest path to each destination is found.

- **User Input:**  
  Allows input for the number of destinations, connections, and preferences (e.g., start and end points).

- **Shortest Path Calculation:**  
  Computes the shortest route between the starting point and other destinations based on edge weights (distances or travel times).

- **Interactive Planning:**  
  The program adapts to user preferences, providing real-time route updates based on changing conditions or new inputs.

### **Time Complexity:**  
- **Best Case:** O(V + E) (where V is the number of vertices and E is the number of edges)  
- **Average Case:** O(V + E)  
- **Worst Case:** O(V + E)

### **Conclusion:**  
BFS is ideal for tourist route planning because it ensures an efficient exploration of all possible paths, making it easy to identify the shortest or most optimal route. This approach enhances the travel experience by reducing time and effort while ensuring all key destinations are covered.

---

## 6. Optimized Sorting for Infrastructure Analysis

Here we have combined two problems: **Prioritizing road repairs** and **Sorting buildings for skyline analysis**.

### **Problem:**  
- **Road Repairs**:  
   Delays in road repair prioritization lead to unsafe roads and increased traffic disruptions.
- **Skyline Analysis**:  
   Poor sorting of building heights affects city design, sunlight distribution, and space optimization.

### **How It Causes Problems:**
- **Road Repairs**:  
   Without proper sorting, roads in critical condition may not be repaired first, leading to unsafe driving conditions, traffic delays, and increased repair costs over time.
- **Skyline Analysis**:  
   Poor sorting of building heights can result in inefficient city layouts, obstructed views, improper sunlight exposure, and overall poor urban planning. This affects both the aesthetics and functionality of the urban space.

### **Solution:**  
- **Prioritize road repairs** based on condition and urgency.
- **Sort building heights** for effective skyline analysis and city planning.

## **Code:** [Combined code of Merge sort and Quick sort](mergequick.cpp)

### Key Aspects:  
- **Dual Focus**:
  Prioritizes road repairs (Merge Sort) and sorts buildings for skyline analysis (Quick Sort).
  
- **Efficient Sorting**:
  Optimal algorithms chosen for respective tasks.
  
- **User-Driven**:
  Dynamic input ensures flexibility.
  
- **Real-World Use**:
  Improves resource allocation (repairs) and urban planning (skyline).
  
- **Scalable**:
  Handles large datasets efficiently.  

### Time Complexity:

1. **Merge Sort** (used for road repairs):  
   - **Best, Average, Worst Case**: O(n log n)

2. **Quick Sort** (used for skyline analysis):  
   - **Best Case**: O(n log n)  
   - **Average Case**: O(n log n)  
   - **Worst Case**: O(n²) (occurs when the pivot is the smallest or largest element repeatedly).

### **Conclusion:**
- **Road Repairs (Merge Sort):**  
The Merge Sort algorithm is used to prioritize the roads based on the severity of damage. The roads with higher severity are given priority for repair.
- **Building Skyline Analysis (Quick Sort):**  
The Quick Sort algorithm is used to sort the buildings based on their left position, which is essential for skyline analysis.
