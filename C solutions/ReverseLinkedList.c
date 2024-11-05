/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* node = NULL;

    while(head != NULL) {
      struct ListNode* temp = head->next;
       head->next = node;
       node = head;
       head = temp;
    }

    return node;
}