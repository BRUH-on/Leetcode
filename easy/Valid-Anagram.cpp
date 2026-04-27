1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.length()!=t.length()) return false;
5        unordered_map<char,int> jam;
6        for(char x:s)
7        {
8            jam[x]++;
9        }
10        for(char y:t)
11        {
12            if(--jam[y]<0) return false;
13        }
14        return true;
15    }
16};