#include <iostream>
#include <unordered_set>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
  public:
    bool hasCycle(ListNode* head) {
        if (!head) {
            return false;
        }
        ListNode *slow = head, *fast = head->next;
        while (slow != fast) {
            if (!fast || !fast->next) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};
int main() {

    system("pause");
    return 0;
}