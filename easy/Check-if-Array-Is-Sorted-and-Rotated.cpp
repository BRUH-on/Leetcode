1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        bool flag=true;
5        int pivot=0;
6        vector<int> B;
7        for(int i=0;i<nums.size();i++)
8        {
9            if(i<nums.size()-1 && nums[i]>nums[i+1])
10            {
11                flag=false;
12                pivot=i+1;
13                break;
14            }
15        }
16        if(flag==true)
17        {
18            return true;
19        }
20        int k=pivot;
21       
22        for(int i=0;i<nums.size();i++)
23        {
24            if(k<nums.size()){
25                B.push_back(nums[k]);
26                k++;
27            }
28            
29        }
30         for(int j=0;j<pivot;j++)
31        
32            {
33                B.push_back(nums[j]);
34            }
35
36        if(!is_sorted(B.begin(),B.end()))
37        {
38            return false;
39        }
40        return true;
41    }
42};