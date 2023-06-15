#include <bits/stdc++.h>
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

void add_list(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool check_list(Node * h1,Node * h2){
   
    while(h1 != NULL && h2 != NULL){
        if(h1->data != h2 ->data){
           return false;
        }
        h1 = h1 ->next;
        h2 = h2 ->next;
    }
    if(h1 != NULL ||  h2 != NULL){
        return false;
    }
    return true;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int data;
    while (true) {
        cin >> data;
        if (data == -1) {
            break;
        }
        add_list(head1, tail1, data);
    }
    while (true) {
        cin >> data;
        if (data == -1) {
            break;
        }
        add_list(head2, tail2, data);
    }

    if(check_list(head1, head2)){
           cout << "YES" << endl;
    }else cout << "NO" << endl;

    

    return 0;
}
