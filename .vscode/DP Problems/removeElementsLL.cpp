#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
} *head = NULL;

ListNode* removeElements(ListNode* head, int val) {
        if(head->val == val) {
            head = head->next;
            removeElements(head,val);
        
        }
        else {
            ListNode *p = head->next;
            ListNode *q = head;
            while(p != NULL) {
                if(p->val == val) {
                    q->next = p->next;
                    
                } else {
                    q = p;
                    p = p->next;
                }
                

            }
        }
        
        
        return head;
    }

void printList(ListNode* head) {
    ListNode *p = head;
    while(p != NULL) {
        cout << p->val << " ";
        p = p->next;
}
}


int main() {

    ListNode *p = new ListNode(1);
    p->next = new ListNode(2);
    p->next->next = new ListNode(6);
    p->next->next->next = new ListNode(3);
    p->next->next->next->next = new ListNode(4);
    p->next->next->next->next->next = new ListNode(5);
    p->next->next->next->next->next->next = new ListNode(6);
    printList(p);
    removeElements(p,6);
    printList(p);

return 0;

}