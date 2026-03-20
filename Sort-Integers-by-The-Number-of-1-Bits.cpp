1class Solution {
2public:
3    vector<int> sortByBits(vector<int>& arr) {
4        sort(arr.begin(),arr.end(),[](int a,int b)
5        {
6            int counta=__builtin_popcount(a);
7            int countb=__builtin_popcount(b);
8
9            if(counta==countb)
10            {
11                return a<b;
12            }
13            else{
14                return counta<countb;
15            }
16        });
17        return arr;
18    }
19};