void swap(TreeNode *root)
    {                                              
      
      if(root==NULL)                          
            return;
        swap(root->left);
        
        swap(root->right);
        
        TreeNode *t;
        t=root->left;                              //swap left right node post order
        root->left=root->right;                    
        root->right=t;                             //recursion
    }
    
    TreeNode* invertTree(TreeNode* root) {
        swap(root);
        return root;
        }
