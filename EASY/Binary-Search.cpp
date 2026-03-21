1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n=nums.size();
5        int st=0,end=n-1,mid;
6        while(st<=end)
7        {
8            mid=(st+end)/2;
9            if(target>nums[mid])
10            {
11                st=mid+1;
12            }
13            else if(target<nums[mid])
14            {
15                end=mid-1;
16            }
17            else{
18                return mid;
19            }
20        }
21        return -1;
22    }
23};
