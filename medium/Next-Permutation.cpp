1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        int ind=-1;
5        for(int i=nums.size()-2;i>=0;i--)
6        {
7            if(i<nums.size() && nums[i]<nums[i+1])
8            {
9               
10                ind=i;
11                break;
12            }
13        }
14        if(ind==-1)
15        {
16             int end=nums.size()-1;
17            for(int i=0;i<nums.size()/2;i++)
18            {
19                swap(nums[i],nums[end]);
20                end--;
21                
22            }
23            return;
24        }
25        else{
26            for(int i=nums.size()-1;i>ind;i--)
27            { 
28                if(nums[i]>nums[ind]){
29            swap(nums[i],nums[ind]);
30            break;
31                }
32            }
33        }
34         int end=nums.size()-1;
35        for(int i=ind+1;i<end;i++)
36        {
37            swap(nums[i],nums[end]);
38            end--;
39        }
40    }
41};