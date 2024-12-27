## 1. Evacuation Request Scheduling

### Problem Statement:
Efficiently process evacuation requests based on urgency to ensure high-risk zones are prioritized during disasters.

### Key Aspects:
- Each evacuation request has a priority score based on the severity of the threat.
- Requests must be processed in decreasing order of priority.
- Dynamically handles incoming requests during a disaster.

### Algorithm applied: [Priority Queue](priorityqueue.cpp)
A Priority Queue ensures the most urgent requests are processed first. It efficiently handles dynamic insertions and extractions based on priority.

### Time Complexity:
- Insertion: 𝑂(log ⁡𝑛)
- Deletion (extract max/min): 𝑂(log ⁡𝑛)

---

## 2. Evacuation Zone Network Design

### Problem Statement:
Design a cost-effective network connecting shelters and evacuation zones during a disaster.

### Key Aspects:
- Represents evacuation zones and shelters as a weighted graph.
- Finds the Minimum Spanning Tree (MST) to minimize connection costs.

### Algorithm applied: [Prim's Algorithm](primcode.cpp)
Prim’s algorithm is ideal for constructing an MST incrementally, making it suitable for dynamic systems like disaster response where new zones or shelters may be added.

### Time Complexity:
With adjacency list + min-heap: 𝑂(𝐸 log ⁡𝑉), where V is the number of vertices and E is the number of edges.

---

## 3. Dynamic Evacuation Path Updates

### Problem Statement:
Dynamically update evacuation paths in real-time when roads are blocked or new hazards emerge.

### Key Aspects:
- Maintains a dynamic list of paths connecting zones to shelters.
- Allows insertion, deletion, and traversal in constant or linear time.

### Algorithm applied: [Linked List](ll.cpp)
Linked lists provide flexibility to dynamically update paths without needing to resize or reallocate memory.

### Time Complexity:
- Insertion/Deletion: 𝑂(1) (if position is known).
- Search: 𝑂(𝑛)

---

## Conclusion:
**Priority Queue**, **Prim's Algorithm**, and **Linked Lists** are integral to a Smart Disaster Response System as they address real-time prioritization, efficient network design, and dynamic adaptability. The Priority Queue ensures critical evacuation requests are handled first, enabling swift responses in high-risk areas. Prim’s Algorithm optimizes connectivity between shelters and zones by minimizing infrastructure costs through a Minimum Spanning Tree. Linked Lists allow for seamless updates to evacuation routes, reflecting real-time changes like blocked roads or emerging hazards. Together, they provide a scalable, cost-effective, and adaptive framework for efficient disaster management.
