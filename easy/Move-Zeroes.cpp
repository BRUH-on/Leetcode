1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int n=nums.size();
5        int i=0;
6         int j=1;
7        while(i<n && j<n)
8        {
9           
10            if(nums[i]==0 && nums[j]==0)
11            {
12                j++;
13            }
14            else if(nums[i]!=0)
15            {
16                i++;
17                if(i==j)  j++;
18            }
19            else 
20            {
21                swap(nums[i],nums[j]);
22                i++;
23                j++;
24            }
25        }
26    }
27};