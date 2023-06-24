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

void tail_insertion(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_any_pos(Node * head,Node * tail,int pos, int data){
    Node * newNode = new Node(data);
    Node * temp = head;
    for(int i = 1; i <= pos-1; i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}


int size(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
       
    }

    return 0;
}
