1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int n=nums.size();
5        int curr_sum=nums[0];
6        int max_sum=nums[0];
7        for(int i=1;i<n;i++)
8        {
9            curr_sum=max(nums[i],curr_sum+nums[i]);
10            max_sum=max(max_sum,curr_sum);
11        }
12        return max_sum;
13    }
14};