#include <bits/stdc++.h>
using namespace std;
class myStack{
    public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int size(){
        l.size();
    }
    int top(){
        return l.back();
    }
    bool isempty(){
        if( l.size() == 0 ) return true;
        else return false;
    }
};
int main(){
    myStack st;
    myStack st2;
    int size,size2;
    cin >> size;
    for(int i=0; i<size; i++){
        int val;
        cin >> val;
        st.push(val);
    }
    while(!st.isempty()){
        cout << st.top() << endl;
        st.pop();
    }
    cin >> size2;
    for(int i=0; i<size2; i++){
        int val;
        cin >> val;
        st2.push(val);
    }
    while(!st2.isempty()){
        cout << st2.top() << endl;
        st2.pop();
    } 


    return 0; 
}