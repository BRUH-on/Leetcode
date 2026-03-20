1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int store=0;
5        int count=0;
6        int n=nums.size();
7        for(int i=0;i<n;i++)
8        {
9            if(nums[i]==1)
10            {
11                count++;
12                if(store<count)
13                {
14                    store=count;
15                }
16                
17            }
18            else if(nums[i]==0){
19                if (store<count)
20                {
21                    store=count;
22                    
23                }
24                else{
25                    count=0;
26                }
27            }
28        }
29        return store;
30    }
31};