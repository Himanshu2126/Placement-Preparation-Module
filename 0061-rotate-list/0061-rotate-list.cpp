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
    ListNode* rotateRight(ListNode* head, int k)
    {
  //            if(head==NULL||head->next||k==0) return NULL;
      
  //      ListNode* temp=head;
    

     
  //      int cnt=1;
  //     while(temp->next!=NULL &&  cnt++)
  //     { 
         
  //         temp=temp->next;
  //     }
  

  //        k =cnt%k;
  //        k=cnt-k;
       
  
      
  //      ListNode* temp2=head;

  
  //   while(k--)
  //     {
  //         temp2=temp2->next;
  //     }
     


  //           head=temp2->next;
            
  //           temp2->next=NULL;




  //  return head;

if(head == NULL||head->next == NULL||k == 0) return head;
    //calculating length
    ListNode* temp = head;
    int length = 1;
    while(temp->next != NULL) {
        ++length;
        temp = temp->next;
    }
    //link last node to first node
    temp->next = head;
    k = k%length; //when k is more than length of list
    int end = length-k; //to get end of the list
    while(end--) temp = temp->next;
    //breaking last node link and pointing to NULL
    head = temp->next;
    temp->next = NULL;
        
    return head;






    }
};