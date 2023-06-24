#include <bits/stdc++.h>
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
void add_list(Node * &head,Node * &tail, int data){
    Node * newNode = new Node(data);
    if( head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_list(Node * head){
    Node * temp = head;
    while( temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;  
}
bool ispal(Node * head){
    Node * newHead = NULL;
    Node * newTail = NULL;
    Node * temp = head;
    while( temp != NULL){
        add_list(newHead,newTail,temp->next);
        temp = temp->next;
    }
    rev(newHead,newHead);
    temp = head;
    Node * temp2 = newHead;
    while (temp != NULL)
    {
        if(temp->data != temp2->data){
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    
}
void rev(Node * head, Node * tail){
    if(tail->next == NULL){
        head = tail;
        return;
    }
    rev(head, tail->next);
    tail->next->next = tail;
    tail->next = NULL;
}
int main(){
  Node * head = NULL;
  Node * tail = NULL;
  int data;
  while(true){
    cin >> data;
    if(data == -1) break;
    add_list(head,tail,data);
  }  
  print_list(head);
  ispal(head);
  if( ispal(head) == true ) cout <<"YES" << endl;
  else cout << "NO" << endl;
    return 0;
}