
Node * findSuccessor(Node *root)
{
    Node *curr = root;
    while(curr && curr->left!= NULL)
    curr = curr->left;
    return curr;
}
// Return the root of the modified BST after deleting the node with value X
Node *deleteNode(Node *root,  int X)
{
    if(!root) return NULL;
   if(root->data>X){
       root->left = deleteNode(root->left, X);
   }
   else
   if(root->data<X){
       root->right = deleteNode(root->right, X);
   }
   else
   if(root->left == NULL)
   {
       Node * node = root->right;
       free(root);
       return node;
   }
   else
   if(root->right == NULL){
       Node *node = root->left;
       free(root); return node;
   }
   else
   {
       Node* node = findSuccessor(root->right);
       root->data = node->data;
       root->right = deleteNode(root->right, node->data);
   }
   return root;
   
}


