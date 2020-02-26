/*************************************************************************
	> File Name: 160.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 13时14分33秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA, *q = headB;
    while (p != q){
        p = p ? p->next : headB;
        q = q ? q->next : headA;
    }
    return p;
}

