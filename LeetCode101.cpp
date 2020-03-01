/*************************************************************************
	> File Name: LeetCode101.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月01日 星期日 12时33分57秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool is_check(struct TreeNode *p, struct TreeNode *q){
    if(p == NULL && q == NULL)return true;
    if(p == NULL || q == NULL)return false;
    if (p->val - q->val)return false;
    return is_check(p->left, q->right) && is_check(p->right, q->left);
}
bool isSymmetric(struct TreeNode* root){
    if (root == NULL)return true;
    return is_check(root->left, root->right);

}
