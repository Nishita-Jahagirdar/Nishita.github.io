#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct EventNode
{
    string eventName;
    int startTime;
    int endTime;
    int height;
    EventNode* left;
    EventNode* right;

    EventNode(string name, int start, int end)
        : eventName(name), startTime(start), endTime(end), height(1), left(nullptr), right(nullptr) {}
};

class AVLTree
{
private:
    EventNode* root;

    int height(EventNode* node) {
        return node ? node->height : 0;
    }

    EventNode* rightRotate(EventNode* y) {
        EventNode* x = y->left;
        EventNode* T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = max(height(y->left), height(y->right)) + 1;
        x->height = max(height(x->left), height(x->right)) + 1;

        return x;
    }

    EventNode* leftRotate(EventNode* x) {
        EventNode* y = x->right;
        EventNode* T2 = y->left;

        y->left = x;
        x->right = T2;

        x->height = max(height(x->left), height(x->right)) + 1;
        y->height = max(height(y->left), height(y->right)) + 1;

        return y;
    }

    int getBalance(EventNode* node) {
        return node ? height(node->left) - height(node->right) : 0;
    }

    EventNode* insert(EventNode* node, string name, int start, int end) {
        if (!node) return new EventNode(name, start, end);

        if (start < node->startTime)
            node->left = insert(node->left, name, start, end);
        else if (start > node->startTime)
            node->right = insert(node->right, name, start, end);
        else
            return node;

        node->height = max(height(node->left), height(node->right)) + 1;

        int balance = getBalance(node);

        if (balance > 1 && start < node->left->startTime)
            return rightRotate(node);

        if (balance < -1 && start > node->right->startTime)
            return leftRotate(node);

        if (balance > 1 && start > node->left->startTime) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        if (balance < -1 && start < node->right->startTime) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }

    bool isConflict(EventNode* node, int start, int end) {
        if (!node) return false;

        if ((start < node->endTime && end > node->startTime)) {
            return true;
        }

        if (start < node->startTime) return isConflict(node->left, start, end);
        return isConflict(node->right, start, end);
    }

    void inorder(EventNode* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->eventName << " [Start: " << node->startTime << ", End: " << node->endTime << "]\n";
        inorder(node->right);
    }

public:
    AVLTree() : root(nullptr) {}

    bool insertEvent(string name, int start, int end) {
        if (isConflict(root, start, end)) {
            cout << "Conflict detected! Event cannot be scheduled.\n";
            return false;
        }
        root = insert(root, name, start, end);
        cout << "Event " << name << " scheduled successfully.\n";
        return true;
    }

    void displayEvents() {
        cout << "Scheduled Events:\n";
        inorder(root);
    }
};

int main()
{
    AVLTree scheduler;
    int n;

    cout << "Enter the number of events to schedule: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string eventName;
        int startTime, endTime;

        cout << "\nEnter details for event " << i + 1 << ":\n";
        cout << "Event name: ";
        cin.ignore();
        getline(cin, eventName);
        cout << "Start time (in hours): ";
        cin >> startTime;
        cout << "End time (in hours): ";
        cin >> endTime;

        scheduler.insertEvent(eventName, startTime, endTime);
    }

    scheduler.displayEvents();

    return 0;
}
