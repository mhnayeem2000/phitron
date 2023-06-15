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
  Node* Max = head;
  Node* Min = head;

    for (Node* i = head; i->next != NULL; i = i->next) {
        if (Max->data < i->next->data) {
            Max = i->next;
        }
        if (Min->data > i->next->data) {
            Min = i->next;
        }
    }
  cout << Max->data << " " << Min->data <<  endl;
    return 0;
}