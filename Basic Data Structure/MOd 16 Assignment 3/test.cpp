#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop() {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
            tail = NULL;
    }

    int front() {
        return head->val;
    }

    int size() {
        return sz;
    }

    bool isEmpty() {
        return sz == 0;
    }
};

class myStack {
public:
    Node* topNode = NULL;

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop() {
        if (topNode == NULL) return;
        Node* deleteNode = topNode;
        topNode = topNode->next;
        delete deleteNode;
    }

    int size() {
        int sz = 0;
        Node* curr = topNode;
        while (curr != NULL) {
            sz++;
            curr = curr->next;
        }
        return sz;
    }

    int top() {
        if (topNode == NULL) return -1;
        return topNode->val;
    }

    bool isEmpty() {
        return topNode == NULL;
    }
};

bool areListsEqual(myStack& st, myQueue& q) {
    list<int> listFromStack;
    list<int> listFromQueue;

    while (!st.isEmpty()) {
        listFromStack.push_back(st.top());
        st.pop();
    }

    while (!q.isEmpty()) {
        listFromQueue.push_back(q.front());
        q.pop();
    }

    return listFromStack == listFromQueue;
}

int main() {
    myStack st;
    myQueue q;
    int sizes, sizeq;
    cin >> sizes >> sizeq;
    for (int i = 0; i < sizes; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < sizeq; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    bool equal = true;

    if (st.size() != q.size()) {
        equal = false;
    } else {
        while (!st.isEmpty() && !q.isEmpty()) {
            if (st.top() != q.front()) {
                equal = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    if (equal) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

