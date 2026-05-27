1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        
6        // Normalize k if it's greater than the array size
7        k = k % n; 
8        
9        // Step 1: Reverse the entire array
10        reverse(nums.begin(), nums.end());
11        
12        // Step 2: Reverse the first k elements
13        reverse(nums.begin(), nums.begin() + k);
14        
15        // Step 3: Reverse the remaining elements
16      reverse(nums.begin() + k, nums.end());
17    }
18};