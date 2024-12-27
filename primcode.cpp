#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

typedef pair<int, int> Edge; 

void primMST(vector<vector<Edge>>& graph, int start) 
{
    int n = graph.size();
    vector<bool> visited(n, false);
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

    pq.push({0, start});
    int totalCost = 0;

    while (!pq.empty()) {
        int cost = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (visited[node]) continue;

        visited[node] = true;
        totalCost += cost;
        cout << "Adding node " << node << " with cost " << cost << endl;

        for (auto& neighbor : graph[node]) {
            if (!visited[neighbor.second]) {
                pq.push(neighbor);
            }
        }
    }

    cout << "Total cost of MST: " << totalCost << endl;
}

int main() 
{
    int n = 4;
    vector<vector<Edge>> graph(n);

    // Graph as adjacency list
    graph[0] = {{1, 1}, {4, 3}};
    graph[1] = {{1, 0}, {2, 2}, {3, 3}};
    graph[2] = {{2, 1}, {5, 3}};
    graph[3] = {{4, 0}, {3, 1}, {5, 2}};

    cout << "Prim's MST starting from node 0:\n";
    primMST(graph, 0);

    return 0;
}
