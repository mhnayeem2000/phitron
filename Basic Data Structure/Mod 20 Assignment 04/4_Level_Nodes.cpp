#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int  val;
    Node * left;
    Node * right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree(){
    int val;
    cin >> val;
    Node * root;
    if( val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if( root) q.push(root);
    while(!q.empty()){
        //1st work
        Node * p = q.front();
        q.pop();

        // 2nd work
        int l, r;
        cin >> l >> r;
        Node *  left;
        Node * right;
        if( l == -1) left = NULL;
        else left = new Node(l);
        if( r == -1) right = NULL;
        else right = new Node(r);

        p->left = left;
        p->right = right;

        // 3rd work
        if( p->left){
            q.push(p->left);
        }
        if( p->right) q.push(p->right);

    }
    return root;
}
vector<int> v;
void level_nodes(Node * root,int lnumber){
    queue<pair<Node * ,int>> q;
    q.push({root,0});
    while(!q.empty()){
        pair<Node * ,int> f = q.front();
        q.pop();
        Node * n = f.first;
        int l = f.second;

        if(lnumber == l ){
            v.push_back(n.val);
        }

        if(n->right) q.push({n->right,l+1});
        if(n->left) q.push({n->left,l+1});
    }
}
int main(){
    Node * root = input_tree();
    int lnumber;
    cin >> lnumber;
    level_nodes(root);
    return 0;
}