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
void inset_At_Tail(Node * &head,int data){
    Node * newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    
    Node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_List(Node *head){
    cout << "Your Lined List :";
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
      
    }
}
int main(){
    Node * head = NULL;
    cout << "1. Inset At Tail" << endl;
    cout << "Select Option : ";
    int op;
    cin >> op;
    if(op == 1){
        cout << "Please Enter Value :";
        int v;cin >> v;
        inset_At_Tail(head, v);
    }
    print_linked_List(head);
    return 0;
}