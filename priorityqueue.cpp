#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Request 
{
    string zone;
    int severity;

    bool operator<(const Request& other) const {
        return severity < other.severity;
    }
};

int main() 
{
    priority_queue<Request> pq;

    pq.push({"Zone A", 5});
    pq.push({"Zone B", 9});
    pq.push({"Zone C", 3});

    while (!pq.empty()) {
        Request req = pq.top();
        pq.pop();
        cout << "Processing request for " << req.zone << " with severity " << req.severity << endl;
    }
    return 0;
}