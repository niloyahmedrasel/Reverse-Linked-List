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

//brute force solution

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>arr;

        ListNode *temp = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int i = arr.size()-1;

        ListNode *ans = head;

        while(ans){
            ans->val = arr[i];
            i--;
            ans = ans->next;
        }
        return head;
    }
};

//optimal solution

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
    ListNode* reverseList(ListNode* head) {
       ListNode *curr = head;
       ListNode *prev = NULL;
       ListNode *fut = NULL;

       while(curr){
         fut = curr->next;
         curr->next = prev;
         prev = curr;
         curr = fut;
       }

       head = prev;

       return head;

    }
};
