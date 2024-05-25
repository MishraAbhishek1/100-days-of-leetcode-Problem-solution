class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); // Dummy node
        ListNode* l3 = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            l3->next = new ListNode(sum % 10);
            l3 = l3->next;

            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }

        ListNode* result = dummy->next;
        delete dummy; // Free the memory allocated for the dummy node
        return result;
            
    }
};