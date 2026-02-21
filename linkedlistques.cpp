#include <iostream>
using namespace std;

// Definition of ListNode
struct ListNode {
    int val;
    ListNode* next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* nextNode) : val(x), next(nextNode) {}
};

// Function to add two numbers
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
    ListNode* dummy = new ListNode(0);
    ListNode* temp = dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;

        ListNode* newNode = new ListNode(sum % 10);
        temp->next = newNode;
        temp = temp->next;
    }

    return dummy->next;
}

// Function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next != NULL)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // Creating first list: [2,4,3]
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Creating second list: [5,6,4]
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    cout << "List 1: ";
    printList(l1);

    cout << "List 2: ";
    printList(l2);

    // Calling function
    ListNode* result = addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result);

    return 0;
}