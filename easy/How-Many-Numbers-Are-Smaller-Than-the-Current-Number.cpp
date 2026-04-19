1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> arr;
6        for(int i=0;i<n;i++)
7        {
8            int count=0;
9            for(int j=0;j<n;j++)
10            {
11                if(nums[j]<nums[i])
12                {
13                    count++;
14                }
15            }
16            arr.push_back(count);
17        }
18        return arr;
19    }
20};