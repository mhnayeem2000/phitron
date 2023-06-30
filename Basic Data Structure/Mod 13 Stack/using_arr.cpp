#include<bits/stdc++.h>
using namespace std;
class myStack(){
    public: 
    vector<int> v;
    void push(int val){
        v.push_back(val);
    }
    void pop(int val){
        v.pop_back(val);
    }
    int size(int val){
        return v.size(val);
    }
    int top(int val){
        return v.back(val);
    }
    bool empty(int val){
        if(v.size(val) == 0) return true;
        else return false;
    }
};
in main(){
    myStack st;
    st.push(10);
    return 0;
}