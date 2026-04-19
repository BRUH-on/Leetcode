1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int res = 0;
5
6        for (int n : nums) {
7            res ^= n;
8        }
9
10        return res;        
11
12    //     int index,n=nums.size();
13    //   sort(nums.begin(),nums.end());
14    //   for(int i=0;i<nums.size();i+=2)
15    //   {
16    //     int j=i+1; 
17    //     if(j<n && nums[i]!=nums[j])
18    //     {
19    //         j=i+1;
20    //         return nums[i];
21    //         j++;
22    //     }
23    //     index=nums[i];
24    //   }
25    //   return index;
26    }
27};