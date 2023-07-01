#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node * next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class myQueue {
    public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;
    void push(int val){
        sz++;
        Node * newNode = new Node(val);
        if( head == NULL ){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop(){
        sz--;
        Node * deleteNode = head;
        head = head->next;
        delete deleteNode;
        if( head == NULL ) tail = NULL;
    }
    int front(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool isEmpty(){
        if( sz == 0 ) return true;
        else return false;
    }
};
int main(){
    myQueue q;
    int size;
    cin >> size;
    for( int i = 0; i < size; i++ ){
        int val;
        cin >> val;
        q.push( val );
    }
    while(!q.isEmpty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}