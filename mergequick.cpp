#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure for Road
struct Road {
    int severity;
    string roadName;

    Road(int sev, string name) : severity(sev), roadName(name) {}
};

// Merge Sort Function for Sorting Roads by Severity
void merge(vector<Road>& roads, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    vector<Road> leftRoads(n1), rightRoads(n2);
    
    for (int i = 0; i < n1; i++) {
        leftRoads[i] = roads[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightRoads[i] = roads[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftRoads[i].severity > rightRoads[j].severity) {
            roads[k] = leftRoads[i];
            i++;
        } else {
            roads[k] = rightRoads[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        roads[k] = leftRoads[i];
        i++;
        k++;
    }

    while (j < n2) {
        roads[k] = rightRoads[j];
        j++;
        k++;
    }
}

void mergeSortRoads(vector<Road>& roads, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSortRoads(roads, left, mid);
        mergeSortRoads(roads, mid + 1, right);

        merge(roads, left, mid, right);
    }
}

// Structure for Building
struct Building {
    int left;
    int right;
    int height;
};

// QuickSort Function for Sorting Buildings by Left Position
int partition(vector<Building>& buildings, int low, int high) {
    int pivot = buildings[high].left;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (buildings[j].left <= pivot) {
            i++;
            swap(buildings[i], buildings[j]);
        }
    }
    swap(buildings[i + 1], buildings[high]);
    return (i + 1);
}

void quickSort(vector<Building>& buildings, int low, int high) {
    if (low < high) {
        int pi = partition(buildings, low, high);
        quickSort(buildings, low, pi - 1);
        quickSort(buildings, pi + 1, high);
    }
}

// Function to print the sorted road repairs
void prioritizeRepairs(vector<Road>& roads) {
    cout << "\nPrioritizing road repairs based on severity:\n";
    for (const auto& road : roads) {
        cout << "Repairing road: " << road.roadName
             << " with severity " << road.severity << endl;
    }
}

// Function to print the sorted buildings for skyline analysis
void printSkyline(const vector<Building>& buildings) {
    cout << "\nSorted Buildings for Skyline Analysis:" << endl;
    for (const auto& building : buildings) {
        cout << "Building at position " << building.left
             << " to " << building.right
             << " with height " << building.height << endl;
    }
}

int main() {
    // Road repairs input and prioritization using Merge Sort
    int n;
    cout << "Enter the number of roads: ";
    cin >> n;

    vector<Road> roads;
    for (int i = 0; i < n; i++) {
        string roadName;
        int severity;

        cout << "Enter name of road " << i + 1 << ": ";
        cin.ignore();
        getline(cin, roadName);

        cout << "Enter severity of damage (higher number means more severe): ";
        cin >> severity;

        roads.push_back(Road(severity, roadName));
    }

    mergeSortRoads(roads, 0, roads.size() - 1);
    prioritizeRepairs(roads);

    // Building skyline analysis input and sorting using Quick Sort
    cout << "\nEnter the number of buildings: ";
    cin >> n;

    vector<Building> buildings(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the left position, right position, and height for building " << i + 1 << ": ";
        cin >> buildings[i].left >> buildings[i].right >> buildings[i].height;
    }

    quickSort(buildings, 0, buildings.size() - 1);
    printSkyline(buildings);

    return 0;
}
