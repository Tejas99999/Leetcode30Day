class Solution {

public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        if(m==0)
            return 0;
        int n=matrix[0].size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            ans=ans+matrix[i][n-1];
        }
        for(int i=0;i<n;i++)
        {
            ans=ans+matrix[m-1][i];
        }
       ans=ans-matrix[m-1][n-1];
        for(int i=m-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
            {
                if(matrix[i][j]==0)
                    continue;
                else
                {
                    matrix[i][j]=1+min({matrix[i][j+1],matrix[i+1][j],matrix[i+1][j+1]});
                     ans=ans+matrix[i][j];
                }

            }
        }
        return ans;
    }
};
