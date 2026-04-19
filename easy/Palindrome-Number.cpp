1class Solution {
2public:
3    bool isPalindrome(int x) {
4     long prev=x,last=0,new_num=0;
5        if(x<0)
6            return false;
7        
8        while(x>0)
9            {
10        last= x%10;
11        new_num=new_num*10+last;
12        x=x/10;
13            }
14
15        return new_num==prev;
16    }
17};