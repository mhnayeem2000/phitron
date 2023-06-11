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
int main(){
    Node * head = new Node(10);
    Node * b = new Node(20);
    //a.next =&b;
    head->next = b;

    cout << head->data << endl;
    cout << head->next->data << endl;
    return 0; 
}