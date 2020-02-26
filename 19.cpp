/*************************************************************************
	> File Name: 19.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 13时01分40秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *end = head;
    struct ListNode *p = head;
    struct ListNode *q= head;
    int i = 0;
    while (i < n){
        end = end->next;
        i++;
    }
    if (!end){
        head=head->next;
    }else
    {
        while (end){
            q = p;
            p = p->next;
            end = end->next;
        }
        q->next = p->next;
        free(p);
    }

    return head;
}

