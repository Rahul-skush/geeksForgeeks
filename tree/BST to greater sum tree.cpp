class Solution
{
    public:
    vector<int>v;
    int k =0;
    void transformTree(struct Node *root)
    {
        inorder(root);
        for(int i=v.size()-2;i>=0;i--)
        v[i] += v[i+1];
        inorder2(root);
        
    }
    
    void inorder(struct Node *root)
    {
        if(!root) return ;
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    void inorder2(struct Node *root)
    {
        if(!root) return ;
        inorder2(root->left);
        root->data = v[k++] - root->data;
        inorder2(root->right);
    }
};
