class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode res(0);
        ListNode* cur = &res;
        while (true)
            if (a == nullptr && b == nullptr)
            {
                return res.next;
            }
            else if (a == nullptr)
            {
                cur->next = b;
                return res.next;
            }
            else if (b == nullptr)
            {
                cur->next = a;
                return res.next;
            }
            else
            {
                if (a->val <= b->val)
                {
                    cur->next = a;
                    cur = a;
                    a = a->next;
                }
                else
                {
                    cur->next = b;
                    cur = b;
                    b = b->next;
                }

            }



    }

};