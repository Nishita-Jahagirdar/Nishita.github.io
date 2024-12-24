#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Road
{
    int severity;
    string roadName;

    Road(int sev, string name) : severity(sev), roadName(name) {}

    bool operator<(const Road& other) const {
        return severity < other.severity;
    }
};

void prioritizeRepairs(vector<Road>& roads)
{
    priority_queue<Road> pq;

    for (const auto& road : roads) {
        pq.push(road);
    }

    while (!pq.empty()) {
        Road road = pq.top();
        pq.pop();

        cout << "Repairing road: " << road.roadName
             << " with severity " << road.severity << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of roads: ";
    cin >> n;

    vector<Road> roads;

    for (int i = 0; i < n; i++) {
        string roadName;
        int severity;

        cout << "Enter name of road " << i+1 << ": ";
        cin.ignore();
        getline(cin, roadName);

        cout << "Enter severity of damage (higher number means more severe): ";
        cin >> severity;

        roads.push_back(Road(severity, roadName));
    }

    cout << "\nPrioritizing road repairs based on severity:\n";
    prioritizeRepairs(roads);

    return 0;
}
