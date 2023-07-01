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
    int size;
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

    return 0; 
}