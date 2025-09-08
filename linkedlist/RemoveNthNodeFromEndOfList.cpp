/*
 * @lc app=leetcode id=1763498562 lang=cpp
 *
 * RemoveNthNodeFromEndOfList
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //count total no of list node
        int count=0;
        ListNode*temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        count=count-n;
        ListNode*curr=head,*prev=NULL;
        if(count==0){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }

        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
        return head;

        
    }
};