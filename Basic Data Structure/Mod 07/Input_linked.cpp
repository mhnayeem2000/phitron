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
void insert_Tail(Node * &head,Node * &tail,int data){
   Node * newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_tail(Node *head){
    Node * temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* head = NULL;
    Node * tail = NULL;
    int val;
    while(true){
        cin >> val;
        if( val == -1) break;
        insert_Tail(head,tail,val);
    }
    print_tail(head);
    return 0;
}