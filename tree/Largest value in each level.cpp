class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        vector<int> v;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int mx = INT_MIN;
            for(int i=0;i<n;i++)
            {
                Node *p = q.front();
                mx = max(mx, p->data);
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
                q.pop();
            }
            v.push_back(mx);
        }
        return v;
    }
};
