1class Solution {
2public:
3    int romanToInt(string s) {
4        int n=s.size();
5        unordered_map<char,int> mp;
6        mp['I']=1;
7        mp['V']=5;
8        mp['X']=10;
9        mp['L']=50;
10        mp['C']=100;
11        mp['D']=500;
12        mp['M']=1000;
13
14        int prev=0,num=0;
15        for(int i=n-1;i>=0;i--)
16        {
17            int curr=mp[s[i]];
18            if(curr<prev)
19            {
20                num=num-curr;
21            }
22            else 
23            {
24                num=num+curr;
25            }
26            prev=mp[s[i]];
27            
28            
29        }
30
31        return num;
32    }
33};