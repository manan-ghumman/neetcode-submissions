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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || head == NULL || head->next == NULL) return head;
        ListNode* tail = head;
        ListNode* temp = head;
        int count = 1;
        int len = 1;
        while(tail->next) {
            tail = tail->next;
            len++;
        }


        if(k % len != 0) {
            k = k % len; //it will just alter number for us
            int position = len - k ; //well start count as one as we are on first node 
            tail->next = head;
            while(count++ != position) {
                temp = temp->next;
            }
            head = temp->next;
            temp->next =NULL;


        }
        return head;
    }
};