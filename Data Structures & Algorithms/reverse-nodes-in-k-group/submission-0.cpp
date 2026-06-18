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
    ListNode* rev(ListNode* head,int k){
        if(head==nullptr) return nullptr;

        ListNode* temp = head;
        int cnt = 0;

    // Check if there are at least k nodes
        while (cnt < k && temp != nullptr) {
        temp = temp->next;
        cnt++;
        }
    if (cnt < k) return head;

        ListNode* prev =nullptr;
        ListNode* curr =head;
        ListNode* nxt = head->next;
        cnt=0;

        while(cnt<k){
           nxt = curr->next;
            curr->next = prev;
            prev=curr;
            curr=nxt;
            cnt++; 
        }
        if(nxt!=nullptr){
            head->next=rev(nxt,k);
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return rev(head,k);
    }
};
