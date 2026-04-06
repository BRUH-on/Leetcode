1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector<int>> ans;
5        for(int i=0;i<numRows;i++)
6        {
7            vector<int> row;
8            row.push_back(1);
9            for(int j=1;j<i;j++)
10            {
11                row.push_back(ans[i-1][j-1]+ans[i-1][j]);
12            }
13            if(i>0){
14                row.push_back(1);
15            }
16           ans.push_back(row);
17        }
18        return ans;
19    }
20};