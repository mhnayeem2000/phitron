queue<pair<TreeNode<int>*,int>> q;
q.push({root,1});
while(!q.empty()){
    pair<TreeNode<int>*,int> p = q.front();
    TreeNode<int> * nd = p.first;
    int level = p.second;
    q.pop();

    if(node->val == searchedValue){
        return level;
    }

    if(nd-> left){
        q.push({nd->left,level+1});
    }
    if(nd->right){
        q.push({nd->right,level+1});
    }


}   