#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myQueue {
    public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;
    void push( int val){
        sz++;
        Node * newNode = new Node(val);
        if( head == NULL ){
            head = newNode;
            tail = newNode;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop(){
        sz--;
        Node * deleteNode = head;
        head = head->next;
        if( head == NULL ){
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
        
    }
    int front(){
        return head->data ;
    }
    int size(){
        return sz;
    }
    bool isEmpty(){
        if( sz == 0 ) return true ;
        else return false;
    }
};
int main(){
    myQueue q;
    int size;
    cin >> size ;
    for( int i = 0; i < size; i++ ){
        int val;
        cin >> val ;
        q.push(val);
    }
    while( !q.isEmpty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}