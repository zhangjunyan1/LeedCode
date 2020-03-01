/*************************************************************************
	> File Name: LeetCode112.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月01日 星期日 13时06分20秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int sum){
    if (!root) return false;
    sum = sum - root->val;
    // 左右节点均为 NULL ，且 sum 为 0 时, 满足条件
    if (!root->left && !root->right && !sum) return true;
    return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
}


