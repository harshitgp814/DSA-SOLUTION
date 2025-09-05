/*
 * @lc app=leetcode id=1760852611 lang=cpp
 *
 * MiddleOfTheLinkedList
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
    ListNode* middleNode(ListNode* head) {
        ListNode*slow = head, *fast=head;
while(fast!=NULL&&fast->next!=NULL){
      slow=slow->next;
      fast=fast->next->next;
}
return slow;

        // int len=0;
        // ListNode*temp=head;
        // while(temp!=NULL)
        // {
        //     len++;
        //     temp=temp->next;
        // }
        //  len/=2;
        // ListNode*mid=head;
        // for(int i =1;i<=len;i++){
        //     mid=mid->next;
        // }
        // return mid;
        
        
    }
};