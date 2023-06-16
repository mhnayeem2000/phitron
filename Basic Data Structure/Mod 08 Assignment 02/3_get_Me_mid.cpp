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

void sort_list(Node* head) {
    
    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->data < j->data) {
                swap(i->data, j->data);
            }
        }
    }
}

int countLength(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}
/*
void print_linked_List(Node *head){
    cout << "Your Lined List :";
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
      
    }
    cout << endl;
}
*/


void midFinding(Node* head) {
    int size = countLength(head);
    int mid = (size+1) / 2;
    //cout << size << " " << mid << endl;
    Node* temp = head;
    for (int i = 1; i < mid; i++) {
        temp = temp->next;
    }
    if (size % 2 == 0) {
        cout << temp->data << " " << temp->next->data << endl;
    } else {
        cout << temp->data << endl;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    while (true) {
        cin >> data;
        if (data == -1)
            break;
        add_list(head, tail, data);
    }
    sort_list(head);
   // print_linked_List(head);
    midFinding(head);

    return 0;
}
