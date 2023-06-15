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

void maxMin(Node * head){

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
Node * Max = head-data;
Node * Min = head-data;
  for(Node * i = head ; i->next!=NULL;i =  i->next){
    cout << i->data << endl;
  }
    return 0;
}