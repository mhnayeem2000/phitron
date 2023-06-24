#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void head_insertion(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void print_list_forward(Node* head) {
    Node* temp = head;
    cout << "L -> ";
    while (temp != NULL) {
        cout  <<  temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_list_backward(Node* tail) {
    Node* temp = tail;
     cout << "R -> ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_index(Node*& head, Node*& tail, int index, int val) {
    if (index < 0) {
        cout << "Invalid" << endl;
        return;
    }
    if (index == 0) {
        head_insertion(head, tail, val);
    } else {
        Node* newNode = new Node(val);
        Node* temp = head;
        int currentIndex = 1;  // Start at index 1 since we already checked index 0

        while (temp != NULL && currentIndex < index) {
            temp = temp->next;
            currentIndex++;
        }

        if (temp == NULL) {
            cout << "Invalid" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;

        if (newNode->next != NULL) {
            newNode->next->prev = newNode;
        }

        if (temp == tail) {
            tail = newNode;
        }
    }

    print_list_forward(head);
    print_list_backward(tail);
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        insert_at_index(head, tail, X, V);
    }

    return 0;
}
