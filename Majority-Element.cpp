1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4       int count=1,candidate=nums[0];
5       for(int i=0;i<nums.size();i++)
6       {
7        if(nums[i]==candidate)
8        {
9            count++;
10        }
11        else{
12            count--;
13        }
14        if(count==0)
15        {
16            count=1;
17            candidate=nums[i];
18        }
19       } 
20       return candidate;
21    }
22};