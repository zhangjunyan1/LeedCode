/*************************************************************************
	> File Name: 142.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 13时11分02秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    if(head == NULL){
        return head;
    }
    struct ListNode *p = head;
    struct ListNode *q = head;
    struct ListNode *t1 = head;
    struct ListNode *t2 = head;
    p = p->next;
    if(p == NULL){
        return NULL;
    }
    q = q->next->next;
    int flag = 0;
    while(p != NULL && q != NULL){
        if(p == q){
            t2 = p;
            flag = 1;
            break;
        }
        p = p->next;
        if(q->next == NULL){
            return NULL;
        }
        q = q->next->next;
    }
    if(flag == 0){
        return NULL;
    }else{
        while(t1 != t2){
            t1 = t1->next;
            t2 = t2->next;
        }
        return t1;
    }
}

