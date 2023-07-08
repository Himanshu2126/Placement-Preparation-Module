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


   
    // map<ListNode *,bool>mp;


    //  while(head)
    //  {
    //      if(mp.find(head)!=mp.end())
    //      {
    //          return head;

    //      }
    //      else
    //      {
    //         mp[head]=true;
    //         head=head->next;
    //      }
    //  }

    //     return NULL;
    // }




if(head == NULL||head->next == NULL) return NULL;
        
    ListNode* fast = head;
   ListNode* slow = head;
    ListNode* entry = head;
        
    while(fast->next != NULL&&fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
            
        if(slow == fast) {
            while(slow != entry) {
                slow = slow->next;
                entry = entry->next;
            }
            return slow;
        }
    }
    return NULL;

    }





};