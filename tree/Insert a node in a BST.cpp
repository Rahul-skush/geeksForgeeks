Node* insert(Node* root, int key)
{
    Node * node = new Node(key);
    if(!root) return node;
    if(root->data == key) return root;
    if(root->data<key)
    root->right = insert(root->right, key);
    else
    root->left = insert(root->left, key);
    
    return root;
}
