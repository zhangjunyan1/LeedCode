/*************************************************************************
	> File Name: LeetCode104.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月01日 星期日 12时53分22秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if(root == NULL) return 0;
    int l = maxDepth(root->left), r = maxDepth(root->right);
    return (l > r ? l : r) + 1;
}


