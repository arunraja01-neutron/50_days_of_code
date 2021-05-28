class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if( root == NULL ){
            return root;
        }
        TreeNode *left = invertTree( root->left );
        TreeNode *right = invertTree( root->right );
        root->left = right;
        root->right = left;
        return root;
    }
};
