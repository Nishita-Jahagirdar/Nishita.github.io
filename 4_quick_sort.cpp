#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Building
{
    int left;
    int right;
    int height;
};

int partition(vector<Building>& buildings, int low, int high)
{
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

void quickSort(vector<Building>& buildings, int low, int high)
{
    if (low < high) {
        int pi = partition(buildings, low, high);

        quickSort(buildings, low, pi - 1);
        quickSort(buildings, pi + 1, high);
    }
}

void printSkyline(const vector<Building>& buildings) {
    for (const auto& building : buildings) {
        cout << "Building at position " << building.left
             << " to " << building.right
             << " with height " << building.height << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of buildings: ";
    cin >> n;

    vector<Building> buildings(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter the left position, right position, and height for building " << i + 1 << ": ";
        cin >> buildings[i].left >> buildings[i].right >> buildings[i].height;
    }

    quickSort(buildings, 0, buildings.size() - 1);

    cout << "\nSorted Buildings for Skyline Analysis:" << endl;
    printSkyline(buildings);

    return 0;
}
