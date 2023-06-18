#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node * prev;
    Node * next;
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print_normal(Node * head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
}

void print_abnormal(Node * tail){
    Node *temp = tail;
    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->prev;
    }
}
int main(){

Node * head = new Node(10);
Node * a = new Node(20);
Node * b = new Node(30);
Node * tail = b;

head->next = a;
a->prev = head;
a->next = b;
b->prev = a;
b->next = NULL;
print_normal(head);
cout << endl;
print_abnormal(tail);
return 0;
}