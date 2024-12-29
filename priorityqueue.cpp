#include<iostream>
#include <bits/stdc++.h>

using namespace std;


void handle( priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq)
{
    while(!pq.empty()) {
        auto req=pq.top();
        cout << "Processing evacuation request of zone " << req.first << " with severity " << req.second << endl;
        pq.pop();
    }
}

int main()
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({1,10});
    pq.push({2,3});
    pq.push({3,50});
    pq.push({4,0});
    pq.push({5,20});

    cout << "Assume higher the Severity, lower the Priority\n";
    handle(pq);
    return 0;
}
