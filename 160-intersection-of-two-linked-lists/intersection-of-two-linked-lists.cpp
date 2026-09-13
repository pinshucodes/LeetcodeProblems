class Solution {
public:
    int getLength(ListNode* head) {
        int len = 0;

        while (head != NULL) {
            len++;
            head = head->next;
        }

        return len;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        int lenA = getLength(headA);
        int lenB = getLength(headB);

        // Find difference in lengths
        int diff = abs(lenA - lenB);

        // Pointer for A
        ListNode* pA = headA;

        // Pointer for B
        ListNode* pB = headB;

        // Move pointer of longer list ahead
        if (lenA > lenB) {
            while (diff--) {
                pA = pA->next;
            }
        } else {
            while (diff--) {
                pB = pB->next;
            }
        }

        // Now both pointers are equally far from the end
        while (pA != pB) {
            pA = pA->next;
            pB = pB->next;
        }

        return pA;
    }
};