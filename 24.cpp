/*************************************************************************
	> File Name: 24.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 13时07分39秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    if(head == NULL||head->next == NULL){  
        return head;
    }
    struct ListNode* n;
    n = head->next;
    head->next = swapPairs(n->next);  
    n->next = head; 
    return n;
}
