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
    ListNode* reverseList(ListNode* head)
    {
        
//           ListNode* current=head;
//           ListNode* pre=NULL;
//         ListNode* temp;
//         while(current)
//         {
//             temp=current->next;
//             current->next=pre;
//             pre=current;
//             current=temp;
//         }
        
//         return pre;
        
        
        
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }


        ListNode*chhotahead   =  reverseList(head->next);
        
        head->next->next=head;
         
        head->next=NULL;
        
        
        return chhotahead;
        
        
    }
};