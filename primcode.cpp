#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void primsAlgorithm(int V, vector<pair<int, int>> adj[])
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int>parent(V,-1);
    vector<int>key(V,INT_MAX);
    vector<bool>inmst(V,false);

    int start = 0;
    key[start] = 0;
    pq.push({0,start});

    while(!pq.empty()) {
        int u=pq.top().second;
        pq.pop();

        inmst[u] = true;

        for(auto it:adj[u]) {
            int v=it.first;
            int wt=it.second;

            if(!inmst[v] && wt<key[v]) {
                parent[v]=u;
                key[v]=wt;
                pq.push({key[v],v});
            }
        }
    }

    cout << "Network of Evacuation Zones and shelters : \n";
    int s=0;

    for(int i=1; i<V; i++) {
        cout << parent[i] << " - " << i << " : " << key[i] << endl;
        s+=key[i];
    }
    cout << "Total cost = " << s << endl;
}

int main()
{
    int V = 5;
    vector<pair<int, int>> adj[V];

    // Graph edges (u, v, weight)
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[0].push_back({3, 6});
    adj[3].push_back({0, 6});

    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});

    adj[1].push_back({3, 8});
    adj[3].push_back({1, 8});

    adj[1].push_back({4, 5});
    adj[4].push_back({1, 5});

    adj[2].push_back({4, 7});
    adj[4].push_back({2, 7});

    primsAlgorithm(V, adj);

    return 0;
}
