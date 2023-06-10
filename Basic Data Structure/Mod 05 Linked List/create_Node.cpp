#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
};
int main(){
    Node a,b;
    a.data = 10;
    b.data = 20;
    a.next =  &b;
    b.next = NULL;
    return 0; 
}