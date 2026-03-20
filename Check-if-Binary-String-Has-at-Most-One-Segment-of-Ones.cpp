1class Solution {
2public:
3    bool checkOnesSegment(string s) {
4        for(int i= 1;i<s.size();i++)
5        {
6            if(s[i]=='1' && s[i-1]=='0')
7            {
8                return false;
9            }
10        }
11        return true;
12    }
13};