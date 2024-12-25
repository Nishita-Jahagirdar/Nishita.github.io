# Business cases

## 1) Prioritising road repairs 

**•  Problem:** <br>
&nbsp;&nbsp;&nbsp;&nbsp;This problem arises when roads are damaged due to factors like weather, heavy traffic, wear and tear, or accidents. Roads may deteriorate over time, leading to potholes, cracks, or other hazards that require repair. Without a system in place to assess and prioritize repairs, roads that are more critical may not be fixed promptly.

**• How It Causes Problems:** <br>
&nbsp;&nbsp;&nbsp;&nbsp;When road are not repaired, heavily damaged or high-traffic roads might be ignored, leading to safety hazards, traffic congestion, and accidents. Unaddressed issues can worsen, leading to more expensive repairs and longer delays. It can also disrupt daily life and affect the economy due to transportation inefficiencies.

**• Solution:** <br>
&nbsp;&nbsp;&nbsp;&nbsp;We can use **Merge Sort** to address this problem. The solution is to assess the severity of damage, traffic volume, and potential safety risks to prioritize repairs. Critical roads, such as those with heavy traffic or severe damage, should be addressed first. This ensures that limited resources are used effectively, reducing hazards, improving traffic flow, and lowering long-term repair costs.

**• Code:**  [Merge Sort](1_merge_sort.cpp)

**• Key aspects:**<br>
&nbsp;&nbsp;&nbsp;&nbsp; **- User Input**: The program prompts the user to enter the number of roads and their details (name and severity of damage).<br>
&nbsp;&nbsp;&nbsp;&nbsp; **- Road Structure**: A Road struct holds the road's name and severity.<br>
&nbsp;&nbsp;&nbsp;&nbsp; **- Priority Queue**: Roads are stored in a priority queue, which automatically sorts them based on severity (higher severity roads come first).<br>
&nbsp;&nbsp;&nbsp;&nbsp; **- Sorting & Output**: The roads are processed in priority order, with the most critical roads being "repaired" (printed) first.

**• Time Complexity:** <br>
&nbsp;&nbsp;&nbsp;&nbsp; **- Best Case:** O(n log n)<br>
&nbsp;&nbsp;&nbsp;&nbsp; **- Average Case:** O(n log n)<br>
&nbsp;&nbsp;&nbsp;&nbsp; **- Worst Case:** O(n log n)

**• Conclusion:**  
&nbsp;&nbsp;&nbsp;&nbsp;Merge Sort was used to prioritize road repairs because it provides stable, efficient sorting with **O(n log n)** complexity. It ensures roads are ordered by severity, allowing for effective allocation of resources and timely repairs.

## 2) Efficient Dispatch of Emergency Vehicles

**• Problem:** <br>
&nbsp;&nbsp;&nbsp;&nbsp;Delays in dispatching emergency vehicles occur when multiple incidents happen, causing inefficiencies.  

**•  How It Causes Problems:** <br>
&nbsp;&nbsp;&nbsp;&nbsp;Slower response times can worsen situations and increase risks.  

**• Solution:** <br>
&nbsp;&nbsp;&nbsp;&nbsp;Use a Min-Heap to prioritize incidents by distance or urgency, ensuring faster and more efficient responses.

**• Code:** [Min Heap](min_heap.cpp)

**•  Key Aspects of the Code:**  
&nbsp;&nbsp;&nbsp;&nbsp; **- Incident Struct**: Represents each emergency with its distance and description.  
&nbsp;&nbsp;&nbsp;&nbsp; **- Min-Heap (Priority Queue)**: Ensures incidents are sorted by shortest distance first, using greater<Incident>.  
&nbsp;&nbsp;&nbsp;&nbsp; **- Efficient Dispatch**: Closest incidents are processed and dispatched in priority order.  
&nbsp;&nbsp;&nbsp;&nbsp; **- User Input**: Allows dynamic input of incidents, including distance and description.  

**•  Time Complexity:** <br>
&nbsp;&nbsp;&nbsp;&nbsp; **- Best Case:** O(n log n) <br>
&nbsp;&nbsp;&nbsp;&nbsp; **- Average Case:** O(n log n) <br>
&nbsp;&nbsp;&nbsp;&nbsp; **- Worst Case:** O(n log n)

**•  Conclusion:**  
&nbsp;&nbsp;&nbsp;&nbsp; Min-Heap is used to prioritize incidents based on shortest distance, ensuring that emergency vehicles are dispatched to the closest locations first. This approach helps allocate resources effectively and ensures timely responses to critical situations.

## 3) Event scheduling in public spaces

**•  Problem:**  
&nbsp;&nbsp;&nbsp;&nbsp; In public spaces, event scheduling can lead to overlaps and confusion without an efficient system.

**•  How It Causes Problems:**  
&nbsp;&nbsp;&nbsp;&nbsp; Clashing events cause logistical issues, overcrowding, and disrupt smooth operations.

**•  Solution:**  
&nbsp;&nbsp;&nbsp;&nbsp; An AVL Tree sorts events by start time, ensuring efficient scheduling and conflict-free allocation of public spaces.

**•  Code:** 
