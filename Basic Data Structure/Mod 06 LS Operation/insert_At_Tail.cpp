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

void sort_list(Node* head) {
    
    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->data < j->data) {
                swap(i->data, j->data);
            }
        }
    }
}
void print_linked_List(Node *head){
    cout << "Your Lined List :";
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
      
    }
    cout << endl;
}
int main(){
    Node * head = NULL;
    while(true){
        cout << "1. Inset At Tail" << endl;
        cout << "2. Print Linked List." << endl;
        cout << "3. Exit" << endl;
        cout << "Select Option : ";
        int op;
        cin >> op;
        if(op == 1){
            cout << "Please Enter Value :";
            int v;cin >> v;
            inset_At_Tail(head, v);
        }else if (op == 2)
        {
            sort_list(head);
            print_linked_List(head);
        }else if (op == 3){
            break;
        }
        
       
    }
    return 0;
}
