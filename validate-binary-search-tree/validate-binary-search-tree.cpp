/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool isvalidate(TreeNode* root, long long mini,long long maxi){
    if(root ==NULL){return true;}
    if(root->val<=mini || root->val>=maxi){return false;}
    return isvalidate(root->left,mini,root->val)
    &&  isvalidate(root->right,root->val,maxi);
}
    bool isValidBST(TreeNode* root) {
   return isvalidate(root,-1000000000000,1000000000000);
        
    }
};