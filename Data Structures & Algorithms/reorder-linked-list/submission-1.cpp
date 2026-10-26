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
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;

        //Finds middle
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        //Split and reverse 2nd half
        ListNode* second=slow->next;
        slow->next=nullptr;

        //3: Reverse Second Half
        ListNode* prev = nullptr;
        while(second!=nullptr){
            ListNode* next=second->next;
            second->next=prev;

            prev=second;
            second=next;
        }
        second=prev;

        //4: Merge
        ListNode* first=head;
        while(second!=nullptr){
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;

            first->next=second;
            second->next=temp1;

            first=temp1;
            second=temp2;
        }

    }
};
