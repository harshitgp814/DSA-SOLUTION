/*
 * @lc app=leetcode id=1760029971 lang=cpp
 *
 * DeleteNodeInALinkedList
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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* target) {
//         Input: head = [4,5,1,9], target = 1
// Output: [4,5,9]
  target->val=target->next->val;
  target->next=target->next->next;


        

    }
};