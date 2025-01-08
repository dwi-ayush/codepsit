#include <iostream>
using namespace std;

struct NODE {
    int val;
    struct NODE *next;
};

typedef NODE *node;

void display(node head) {
    node cur = head;
    cout << "\nLinked List:";
    while (cur != NULL) {
        cout << " " << cur->val;
        cur = cur->next;
    }
    cout << endl;
}

node findMiddle(node head) {
    if (head == NULL) return NULL;
    node slow = head, fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    node head = new NODE{1, NULL};
    head->next = new NODE{2, NULL};
    head->next->next = new NODE{3, NULL};
    head->next->next->next = new NODE{4, NULL};
    head->next->next->next->next = new NODE{5, NULL};
    head->next->next->next->next->next = new NODE{6, NULL};

    display(head);

    node middle = findMiddle(head);
    cout << "The middle element is: " << middle->val << endl;
    return 0;
}
