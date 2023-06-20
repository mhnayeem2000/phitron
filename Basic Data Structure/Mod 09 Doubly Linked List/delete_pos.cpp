#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *prev;
    Node * next;
    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void head_insertion(Node * &head,Node * &tail,int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}
void tail_insertion(Node * &head,Node * &tail, int val){
    Node * newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void delete_pos(Node * head,int pos){
    Node * temp = head;
    for(int i = 1; i <= pos-1; i++){
        temp = temp->next;
    }
    Node * deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}
void print_list(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout << temp->val  << " ";
        temp = temp->next;
    }
    
}
int main(){
    Node * head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node * tail = c;

    head->next = a;
    a->next = b;
    b->next = c;
    a->prev = head;
    b->prev = a;
    c->prev = b;
    head_insertion(head, tail,11);
    tail_insertion(head,tail,100);
    delete_pos(head,2);
    print_list(head);
    return 0;
}
