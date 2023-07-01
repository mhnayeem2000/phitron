#include <bits/stdc++.h>
using namespace std;
class myStack{
    public:
    vector<int> v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int size(){
        v.size();
    }
    int top(){
        return v.back();
    }
    bool isempty(){
        if( v.size() == 0 ) return true;
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