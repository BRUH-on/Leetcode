1class Solution {
2public:
3    int minOperations(string s) {
4        int n=s.size();
5        int countflips1=0,countflips2=0;
6        for(int i=0;i<n;i++)
7        { 
8             if(i%2==0 && s[i]=='0')
9                {
10                    countflips1++;
11                }
12                else if(i%2!=0 && s[i]=='1')
13                {
14                    countflips1++;
15                }
16            
17                if(i%2==0 && s[i]=='1')
18                {
19                  countflips2++;  
20                }
21                else if(i%2!=0 && s[i]=='0')
22                {
23                    countflips2++;
24                }
25            
26        }
27        if(countflips1<countflips2)
28        return countflips1;
29
30        else
31        return countflips2;
32        
33    }
34};