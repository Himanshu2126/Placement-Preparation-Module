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
    ListNode* deleteMiddle(ListNode* head) {





  if(head->next==NULL)
   return NULL; 

        //  ListNode* slow=head;
        // ListNode* fast=head;
        //  ListNode* pre=NULL;

        // while(fast && fast->next)
        // {    pre=slow;
        //     slow=slow->next;
        //     fast=fast->next->next;

        // }
        
        //    pre->next=slow->next;
        //    delete slow;




        //  return head;


    ListNode *temp=new ListNode();
      
      int count=1,mid=0;
      temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
        count++;}
        
      if(count==1){return NULL;}
        
       mid=count/2-1;
       temp=head;
       while(mid--){
         temp=temp->next;
       }
        temp->next=(temp->next)->next;
        return head;



        
    }
};