1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> arr;
6        sort(nums.begin(),nums.end());
7           
8            for(int j=1;j<=n;j++){
9                bool flag=false;
10            if(!binary_search(nums.begin(),nums.end(),j))
11            {
12             arr.push_back(j);
13            }
14            
15        }
16        return arr;
17    }
18};