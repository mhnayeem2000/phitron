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
    st.push(10);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.isempty() << endl;

    return 0; 
}