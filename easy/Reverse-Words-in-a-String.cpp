1class Solution {
2public:
3    string reverseWords(string s) {
4        int n=s.length();
5        vector<string> store;
6        string word="",final="";
7        for(int i=0;i<s.length();i++)
8        {
9            if(s[i]!=' ')
10            word+=s[i];
11            else{
12                if(word!=""){
13                store.push_back(word);
14                word="";
15                }
16            }
17        }
18        if(word!="")
19        {
20            store.push_back(word);
21        }
22        for(int i=store.size()-1;i>=0;i--)
23        {
24            final+=store[i];
25            if(i>0){
26            final+=' ';
27            }
28        }
29        return final;
30    }
31};