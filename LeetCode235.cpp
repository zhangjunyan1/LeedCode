/*************************************************************************
	> File Name: LeetCode235.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月01日 星期日 13时11分42秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if(root == NULL) return NULL;
    
    if(q->val > root->val && p->val > root->val){
       return lowestCommonAncestor(root->right , p, q);
    }else if(q->val < root->val && p->val < root->val){
       return lowestCommonAncestor(root->left , p, q);
    }
    return root;
}
