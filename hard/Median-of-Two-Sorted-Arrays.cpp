1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> num;
5        float mid;
6        for(int i=0;i<nums1.size();i++)
7        {
8            num.push_back(nums1[i]);
9        }
10        for(int i=0;i<nums2.size();i++)
11        {
12            num.push_back(nums2[i]);
13        }
14        sort(num.begin(),num.end());
15        int k=num.size();
16        int start=0,end=k-1;
17        if(k%2==0){
18           mid=(num[k/2]+num[k/2-1])/2.0;
19        }
20        else{
21         return num[k/2];
22        }
23        return mid;      
24    }
25};