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
void short_list(Node * head){
     for(Node *i = head ;i->next != NULL ; i = i->next){
        for(Node *j = i->next; j!=NULL ; j = j->next){
            if(i->data > j->data){
                swap(i->data,j->data);
            }
        }
    }
}
void delete_same(Node * head){
    Node * temp = head;
    while(temp->next != NULL){
        if( temp->data == temp->next->data){
            temp->next = temp->next->next;
        }
        if(temp->next == NULL) break;
        else if( temp->data != temp->next->data){
            temp = temp->next;
        }
    }
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
   short_list(head);
   delete_same(head);
    print_tail(head);
    return 0;
}