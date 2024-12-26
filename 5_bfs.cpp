#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

struct Destination
{
    string name;
    int distance;
};

void printStartLocations(const unordered_map<string, vector<Destination>>& cityMap)
{
    printf("Available Start Locations:\n");
    for (const auto& entry : cityMap) {
        printf("%s\n", entry.first.c_str());
    }
}

void bfsRoutePlanning(const unordered_map<string, vector<Destination>>& cityMap, const string& startLocation)
{
    queue<string> toVisit;
    toVisit.push(startLocation);

    unordered_map<string, bool> visited;
    visited[startLocation] = true;

    printf("Tourist Route starting from %s:\n", startLocation.c_str());

    vector<string> route;
    route.push_back(startLocation);

    while (!toVisit.empty()) {
        string currentLocation = toVisit.front();
        toVisit.pop();

        for (const Destination& destination : cityMap.at(currentLocation)) {
            if (!visited[destination.name]) {
                visited[destination.name] = true;
                toVisit.push(destination.name);
                route.push_back(destination.name);
            }
        }
    }

    printf("Complete Tourist Route: ");
    for (const string& location : route) {
        printf("%s -> ", location.c_str());
    }
    printf("End of route.\n");
}

int main()
{
    unordered_map<string, vector<Destination>> cityMap;

    cityMap["Start"] = {{"Park", 2}, {"Museum", 3}};
    cityMap["Park"] = {{"Museum", 1}, {"Zoo", 4}};
    cityMap["Museum"] = {{"Zoo", 2}, {"Beach", 5}};
    cityMap["Zoo"] = {{"Beach", 1}};
    cityMap["Beach"] = {};

    printStartLocations(cityMap);

    char startLocation[100];
    printf("Enter the start location for the tourist route: ");
    scanf("%s", startLocation);

    bfsRoutePlanning(cityMap, string(startLocation));

    return 0;
}
