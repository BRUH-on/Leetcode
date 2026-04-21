1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n= nums.size();
5          int i=0,k;
6        for(int j=1;j<n;j++)
7        {
8          
9            if(i<n && nums[j]!=nums[i])
10            {
11                i++;
12                nums[i]=nums[j];
13            }
14            
15           }
16            
17            return i+1;
18            
19    }
20};