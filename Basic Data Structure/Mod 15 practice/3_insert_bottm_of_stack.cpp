stack<int> newst;
while(!myStack.empty()){
    newst.push(myStack.top());
    myStack.pop();
}
newst.push(x);
while(!newst.empty()){
    myStack.push(newst.top());
    newst.pop();
}
return newst;