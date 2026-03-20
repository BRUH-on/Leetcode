1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(2*n);
6        for(int i=0;i<n;i++)
7        {
8            ans[i] = nums[i];
9        }
10        for(int i=0;i<n;i++)
11        {
12            ans[i+n]=nums[i];
13        }
14        return ans;
15    }
16};