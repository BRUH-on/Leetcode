1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        vector<int> s;
5        int n=nums.size();
6        int curr;
7        sort(nums.begin(), nums.end());
8        for(int i=1;i<n;i++)
9        {
10            curr=nums[i-1];
11            if(curr==nums[i])
12            {
13                s.push_back(nums[i]);
14            }
15        }
16        for(int i=1;i<=n;i++)
17        {
18            if(!binary_search(nums.begin(),nums.end(),i))
19            {
20                s.push_back(i);
21            }
22        }
23        return s;
24    }
25};