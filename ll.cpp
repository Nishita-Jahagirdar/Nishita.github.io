#include <iostream>
using namespace std;

struct Node 
{
    string path;
    Node* next;

    Node(string p) : path(p), next(nullptr) {}
};

class EvacuationPath 
{
private:
    Node* head;

public:
    EvacuationPath() : head(nullptr) {}

    void addPath(string path) {
        Node* newNode = new Node(path);
        newNode->next = head;
        head = newNode;
    }

    void deletePath(string path) {
        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr && temp->path != path) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Path not found\n";
            return;
        }

        if (prev == nullptr) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }

        delete temp;
    }

    void displayPaths() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->path << endl;
            temp = temp->next;
        }
    }
};

int main() 
{
    EvacuationPath evacuationPaths;

    evacuationPaths.addPath("Zone A -> Shelter 1");
    evacuationPaths.addPath("Zone B -> Shelter 2");
    evacuationPaths.addPath("Zone C -> Shelter 3");

    cout << "Evacuation paths:\n";
    evacuationPaths.displayPaths();

    cout << "\nDeleting path: Zone B -> Shelter 2\n";
    evacuationPaths.deletePath("Zone B -> Shelter 2");

    cout << "\nUpdated evacuation paths:\n";
    evacuationPaths.displayPaths();

    return 0;
}
