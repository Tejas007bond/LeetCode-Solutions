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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //If both the trees are null then return true
        if(p == NULL && q == NULL) return true; 

        // If only one tree is null then they are not equal and return false
        if(p == NULL || q == NULL) return false;

        // If the value of the nodes is not same then return false
        if (p->val != q->val) return false;

        // Check if the left branches of the trees are same or not
        bool leftSame  = isSameTree(p->left,  q->left);

        // Check if the right branches of the trees are same or not
        bool rightSame = isSameTree(p->right, q->right);
        
        return leftSame && rightSame;
    }
};