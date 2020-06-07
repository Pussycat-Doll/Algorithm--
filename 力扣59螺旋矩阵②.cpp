class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>>  res(n,vector<int>(n));
        int m = 1;
        for(int s = 0,e = n-1; s <= e; ++s,--e)
        {
            for(int i = s; i <= e; ++i)
                res[s][i] = m++;
            for(int j = s+1; j <=e; ++j)
                res[j][e] = m++;
            for(int i = e-1; i >= s; --i)
                res[e][i] = m++;
            for(int j = e-1; j >= s+1; --j)
                res[j][s] = m++;
        }
        return res;
    }
};
