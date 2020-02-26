/*************************************************************************
	> File Name: 83.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 13时04分57秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
        struct ListNode *p = head, *q;
        while (p && p->next){
            if(p->val - p->next->val){
                p = p->next;
            }else {
                q = p->next;
                p->next = q->next;
                free(q);
            }
        }
        return head;
}


