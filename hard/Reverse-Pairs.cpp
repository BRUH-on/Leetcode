1class Solution {
2public:
3int count=0;
4 void mergesort(vector<int> &nums,int l,int h,int mid)
5       {
6        
7        vector<int> temp;
8        int left=l;
9        int right=mid+1;
10        int i = l, r = mid + 1;
11
12while (i <= mid) {
13    while (r <= h && nums[i] > 2LL * nums[r]) {
14        r++;
15    }
16    count += (r - (mid + 1));
17    i++;
18}
19        while(left<=mid && right<=h)
20        {
21            if(nums[left]<=nums[right])
22            {
23                temp.push_back(nums[left]);
24                left++;
25            }
26            else{
27                temp.push_back(nums[right]);
28                right++;
29            }
30        }
31
32        while(left<=mid)
33        {
34            
35                temp.push_back(nums[left]);
36                left++;
37         
38        }
39        while(right<=h)
40        {
41           
42                temp.push_back(nums[right]);
43                right++;
44            
45        }
46        for(int i=l;i<=h;i++)
47        {
48            nums[i]=temp[i-l];
49        }
50       }
51       void merge(vector<int> &nums,int l,int h)
52       {
53        if(l<h)
54        {
55            int mid=l+(h-l)/2;
56            merge(nums,l,mid);
57            merge(nums,mid+1,h);
58            mergesort(nums,l,h,mid);
59        }
60       }
61
62    int reversePairs(vector<int>& nums) {
63        int n=nums.size();
64        merge(nums,0,nums.size()-1);
65        return count;
66    }
67};
68
69