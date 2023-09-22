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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* temp= new ListNode(0);
        ListNode* curr=temp;
        int carry=0;

        while(l1 !=NULL || l2 !=NULL || carry != 0){
            
            int x= l1? l1->val:0;
            
            int y=l2 ? l2->val :0;
            
            int sum=carry+x+y;
            
            carry = sum/10; // for carry
                        
            curr->next=new ListNode(sum % 10);
            curr=curr->next;
            
            l1=l1? l1->next: NULL;
            l2=l2? l2->next: NULL;


        }
        return temp->next;
        
    }
};