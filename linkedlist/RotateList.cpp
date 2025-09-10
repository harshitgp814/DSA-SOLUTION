/*
 * @lc app=leetcode id=1766149299 lang=cpp
 *
 * RotateList
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
       
        int count=0;
        ListNode*temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
                 k = k%count;
        if(k==0){
            return head;
        }
        count-=k;

        ListNode*curr=head,*prev=NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        ListNode*Tail=curr;
       //last node pr  leke jaao
       while(Tail->next!=NULL){
        Tail=Tail->next;
       } 
       Tail->next=head;
       head=curr;
       return head;
        
    }
};