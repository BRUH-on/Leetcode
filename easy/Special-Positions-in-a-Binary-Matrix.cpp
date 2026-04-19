1class Solution {
2public:
3    int numSpecial(vector<vector<int>>& mat) {
4        int special=0;
5       int row=mat.size();
6       int col=mat[0].size();
7       vector<int> rowcount(row,0);
8       vector<int> colcount(col,0);
9
10       for(int i=0;i<row;i++)
11       {
12        for(int j=0;j<col;j++)
13        {
14            if(mat[i][j]==1)
15            {
16                rowcount[i]++;
17                colcount[j]++;
18            }
19        }
20       }
21       for(int i=0;i<row;i++)
22       {
23        for(int j=0;j<col;j++)
24        {
25            if(mat[i][j]==1)
26            {
27                if(rowcount[i]==1 && colcount[j]==1)
28                {
29                    special++;
30                }
31            }
32        }
33       }
34       return special;
35    }
36};