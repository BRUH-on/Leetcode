1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> stac;
5          for(int i = 0; i < s.length(); i++)
6        {
7            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
8            {
9                stac.push(s[i]);
10            }
11            
12            else{
13            if(stac.empty() && (s[i]==')' || s[i]==']'|| s[i]=='}'))
14            {
15                return false;
16            }
17
18            if(s[i]==')' && stac.top()=='(')
19            stac.pop();
20
21           else if(s[i]==']' && stac.top()=='[')
22            stac.pop();
23            
24           else if(s[i]=='}' && stac.top()=='{')
25            stac.pop();
26            
27            else 
28            return false;
29        }
30        }
31        return stac.empty();
32    }
33};