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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        
         ListNode * first=headA;
        ListNode * second=headB;

        while(first!=second)
        {
            first= first==NULL?headB:first=first->next;

            
            second= second==NULL?headA:second=second->next;



        }
   return first;

    }
};