#include <iostream>
#include <queue>
using namespace std;

// 1. Evacuation Request Scheduling (Priority Queue)
void evacuationRequestScheduling()
{
    priority_queue<pair<int, string>> requests;
    requests.push({3, "Zone A"});
    requests.push({5, "Zone B"});
    requests.push({2, "Zone C"});

    cout << "Evacuation order: ";
    while (!requests.empty()) {
        cout << requests.top().second << " ";
        requests.pop();
    }
    cout << endl;
}

// 2. Evacuation Zone Network Design (Prim)
void primAlgorithm()
{
    vector<pair<int, pair<int, int>>> edges = {
        {10, {0, 1}}, {20, {0, 2}}, {30, {1, 2}}, {40, {1, 3}}, {50, {2, 3}}
    };
    int n = 4; // Number of vertices
    vector<int> parent(n, -1);
    vector<int> key(n, INT_MAX);
    vector<bool> mstSet(n, false);
    key[0] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = -1;
        for (int v = 0; v < n; v++) {
            if (!mstSet[v] && (u == -1 || key[v] < key[u])) {
                u = v;
            }
        }
        mstSet[u] = true;

        for (auto& edge : edges) {
            int v = edge.second.first == u ? edge.second.second : (edge.second.second == u ? edge.second.first : -1);
            if (v != -1 && !mstSet[v] && edge.first < key[v]) {
                key[v] = edge.first;
                parent[v] = u;
            }
        }
    }

    cout << "Minimum Spanning Tree: ";
    for (int i = 0; i < n; i++) {
        cout << parent[i] << " ";
    }
    cout << endl;
}

// 3. Dynamic Evacuation Path Updates (Linked Lists)
struct Node
{
    string path;
    Node* next;
};

void linkedListEvacuationPath()
{
    Node* head = new Node{"Path A", nullptr};
    head->next = new Node{"Path B", nullptr};
    head->next->next = new Node{"Path C", nullptr};

    Node* temp = head;
    while (temp != nullptr) {
        cout << "Evacuation path: " << temp->path << endl;
        temp = temp->next;
    }
}

void displayMenu()
{
    cout << "Select an operation:" << endl;
    cout << "1- Evacuation Request Scheduling" << endl;
    cout << "2- Evacuation Zone Network Design (Prim)" << endl;
    cout << "3- Dynamic Evacuation Path Updates (Linked Lists)" << endl;
    cout << "Enter your choice: ";
}

int main()
{
    int choice;
    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                evacuationRequestScheduling();
                break;
            case 2:
                primAlgorithm();
                break;
            case 3:
                linkedListEvacuationPath();
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
