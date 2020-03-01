/*************************************************************************
	> File Name: LeetCode111.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月01日 星期日 13时03分31秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
	if(root == NULL){
		return 0;
	}

	int left_length = minDepth(root->left) + 1;
	int right_length = minDepth(root->right) + 1;
	
	if( root->left == NULL ){
		return right_length;
	}else if( root->right == NULL ){
		return left_length;
	}else if( left_length >= right_length ){
		return right_length;
	}else{
		return left_length;
	}
}


