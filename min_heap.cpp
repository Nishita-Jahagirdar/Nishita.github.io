#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

struct Incident
{
    int distance;
    string description;

    Incident(int dist, string desc) : distance(dist), description(desc) {}

    bool operator>(const Incident& other) const {
        return distance > other.distance;
    }
};

void dispatchVehicles(vector<Incident>& incidents)
{
    priority_queue<Incident, vector<Incident>, greater<Incident>> pq;

    for (const auto& incident : incidents) {
        pq.push(incident);
    }

    cout << "Dispatching emergency vehicles:\n";
    while (!pq.empty()) {
        Incident incident = pq.top();
        pq.pop();
        cout << "Dispatching to: " << incident.description
             << " (Distance: " << incident.distance << " km)" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of incidents: ";
    cin >> n;

    vector<Incident> incidents;

    for (int i = 0; i < n; ++i) {
        int distance;
        string description;

        cout << "Enter description of incident " << i + 1 << ": ";
        cin.ignore();
        getline(cin, description);

        cout << "Enter distance of incident " << i + 1 << " (in km): ";
        cin >> distance;

        incidents.push_back(Incident(distance, description));
    }

    dispatchVehicles(incidents);

    return 0;
}
