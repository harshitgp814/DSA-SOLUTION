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
    ListNode *detectCycle(ListNode *head) {
         if(head == NULL) return NULL;


        ListNode*slow=head;
        ListNode*fast=head;
        bool cyclefound = false;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                cyclefound=true;
                break; // yeh btayega cycle hai 
            }

            
        }
            if(!cyclefound){
                return NULL;
            }
            ListNode*p=head;
            while(p!=slow){
                p=p->next;
                slow = slow->next;

            }
            return p;
        }
    };
        

        // // brute forc ek set meh { 3,2,0,-4} firr 2 aayega yes dhek rkha h cycle heh return  krdunga yeh brute soln h 
        //     ListNode* temp = head;
        
        // // Traverse the linked list
        // while(temp != NULL){
        //     // If this node is already visited → cycle start found
        //     if(visited.find(temp) != visited.end()){
        //         return temp;
        //     }
            
        //     // Mark this node as visited
        //     visited.insert(temp);
            
        //     // Move forward
        //     temp = temp->next;
        // }
        
        // // No cycle
        // return NULL;
        
   
