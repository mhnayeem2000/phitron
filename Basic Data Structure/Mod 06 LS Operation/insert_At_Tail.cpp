#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void inset_At_Tail(Node * &node,int data){
    Node * newNode = new Node(data);
    if(head == NULL){
        head = newNode;
    }
    
    Node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_List(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->next << " " << endl;
        temp = temp->next;
    }
}
int main(){
    Node * head = NULL;
    cout << "1. Inset At Tail" << endl;
    int op;
    cin >> op;
    if(op == 1){
        int v;cin >> v;
        inset_At_Tail(head, v);
    }

    return 0;
}