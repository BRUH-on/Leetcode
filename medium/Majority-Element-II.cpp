1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        int n=nums.size();
6        int click=n/3;
7        for(int x:nums)
8        {
9            mp[x]++;
10        }
11        nums.clear();
12        for(auto it=mp.begin();it!=mp.end();it++)
13        {
14            if(mp[it->first]>click)
15            {
16                nums.push_back(it->first);
17            }
18        }
19        return nums;
20    }
21};