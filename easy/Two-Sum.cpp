1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5       int req;
6       for(int i=0;i<nums.size();i++)
7       {
8        req=target-nums[i];
9        if(mp.find(req)!=mp.end())
10        {
11            return {mp[req],i};
12        }
13        mp[nums[i]]=i;
14       }
15        return {};
16    }
17};