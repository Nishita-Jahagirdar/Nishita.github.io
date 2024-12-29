#include<iostream>
#include <bits/stdc++.h>

using namespace std;

// --------------1----------

void handle( priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq)
{
    while(!pq.empty()) {
        auto req=pq.top();
        cout << "Processing evacuation request of zone " << req.first << " with severity " << req.second << endl;
        pq.pop();
    }
}

void pq_1()
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({1,10});
    pq.push({2,3});
    pq.push({3,50});
    pq.push({4,0});
    pq.push({5,20});

    cout << "Assume higher the Severity, lower the Priority\n";
    handle(pq);

}

// -----------------2-------------------

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

void prim_6()
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
}

//------------------3---------------

typedef struct node
{
    int n;
    char status;
    struct node *next;
} road;

road * addroads(road *r)
{
    road *newnode;
    newnode = (road *)malloc(sizeof(road));
    newnode->n=1;
    newnode->status='o';
    newnode->next=nullptr;
    r=newnode;
    road *t=r;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=2;
    newnode->status='x';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=3;
    newnode->status='o';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=4;
    newnode->status='x';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=5;
    newnode->status='o';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=6;
    newnode->status='x';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=7;
    newnode->status='x';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=8;
    newnode->status='o';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=9;
    newnode->status='o';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=10;
    newnode->status='o';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    return r;

}
void display(road *r)
{
    road *t=r;
    if(t==nullptr)
        cout << "No road list\n";
    else {
        
        while(t) {
            cout << t->n << " ";
            t=t->next;
        }
        cout << endl;
    }
}

road * ev(road *r)
{
    road *t=r,*p=nullptr,*z;
    if(t==nullptr)
        return r;

    while(t) {
        
        if(t->status=='x') {
            
            z=t;
            cout << "Road " << t->n << " blocked, evacuating it\n";
            
            if(t==r) {
                r=t->next;
                free(z);
                t=r;
            }

            else if(t->next==nullptr) {
                p->next=nullptr;
                t=nullptr;
            }
                
            else {
                p->next=t->next;
                t=p->next;
            }
            free(z);
        }
            
        else {
            cout << t->n << "\n";
            p=t;
            t=t->next;
        }
    }
    return r;
}

void ll_12()
{
    road *r=nullptr;
    r=addroads(r);
    r=ev(r);
    cout << "\nFinal roads\n";
    display(r);

}

//-----------------------------------------------------

int main()
{
    int ch;
    cout << "**Smart Disaster Response and Evacuation System**\n\nThis System is implemented to provide you,\n";
    cout << "with all the facilities needed to survive and evacuate safely in case of a disaster!\n";
    cout << "\nLet's level up our Vasanth Nagar by prioritizing the safety of our citizens!\n\n";
    cout << "Choose the option you need help with : \n\n";

    while(1) {
        
        cout << "\n\n0.  Exit\n";
        cout << "1.  Evacuation Request Scheduling (Priority Queue)\n";
        cout << "2.  Evacuation Zone Network Design (Prim's)\n";
        cout << "3.  Dynamic Evacuation Path Updates (Linked Lists)\n\n";
        cin >> ch;

        if(ch==1) {
            pq_1();
        }
            
        else if (ch==2) {
            prim_6();
        }
            
        else if (ch==3) {
            ll_12();
        }
            
        else if (ch==0) {
            cout << "Thank you for your time! This System is always at your service!\nExiting...\n";
            exit(0);
        }
            
        else {
            cout << "Invalid Choice, please choose among the above options\n";
        }
    }
    return 0;
}
