#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void add_list_tail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void add_list_head(Node*& head,Node * &tail, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void print_list(Node* head, Node* tail) {
    Node* temp = head;
    while (temp != NULL) {
        //cout << temp->data << " ";
        temp = temp->next;
    }
    //cout << endl;
    cout  << head->data << " " ;
    cout << tail->data ;
    //cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int X,V;
        cin >> X >> V;
        if (X == 0) {
            add_list_head(head,tail, V);
        } else if (X == 1) {
            add_list_tail(head, tail, V);
        }
        print_list(head, tail);
    }
    return 0;
}
