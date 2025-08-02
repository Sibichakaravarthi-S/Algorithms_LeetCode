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
    bool isPalindrome(ListNode* head) {
        
        if(head==nullptr || head->next==nullptr)    return true;

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* secondhalf=reverseList(slow->next);
        ListNode* firsthalf=head;
        ListNode* reversedsecondhalf=secondhalf;

        
        while(reversedsecondhalf!=nullptr){
            if(firsthalf->val != reversedsecondhalf->val){
                return false;
            }
            firsthalf=firsthalf->next;
            reversedsecondhalf=reversedsecondhalf->next;
        }
        slow->next= reverseList(secondhalf);
        return true;
    }

    ListNode* reverseList(ListNode* head){
        ListNode* current=head;
        ListNode* prev=nullptr;

        while(current!=nullptr){
            ListNode* next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
    }
};