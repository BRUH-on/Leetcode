1// struct ListNode {
2
3//     int val;
4//     ListNode* next;
5
6//     // Constructors
7//     ListNode() : val(0), next(nullptr) {}
8
9//     ListNode(int x) : val(x), next(nullptr) {}
10
11//     ListNode(int x, ListNode* next) : val(x), next(next) {}
12// };
13
14class Solution {
15public:
16    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
17        ListNode *fake=new ListNode(0);
18        ListNode *temp=fake;
19        while(list1!=NULL && list2!=NULL)
20        {
21            if(list1->val<=list2->val)
22            {
23                temp->next=list1;
24                temp=temp->next;
25                list1=list1->next;
26            }
27            else{
28                temp->next=list2;
29                temp=temp->next;
30                list2=list2->next;
31            }
32
33        }
34        if(list1!=NULL)
35        {
36            temp->next=list1;
37
38        }
39        else{
40            temp->next=list2;
41        }
42        return fake->next;
43    }
44};