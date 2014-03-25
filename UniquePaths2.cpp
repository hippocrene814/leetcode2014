class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        int m=obstacleGrid.size();
        vector<int> line=obstacleGrid.back();
        int n=line.size();
        int A[m][n];
        for(int i=0; i<m; i++)
        {
            if(obstacleGrid[i][0]) 
            {
                A[i][0]=0;
                for(int k=i; k<m; k++) A[k][0]=0;
                break;
            }
            else A[i][0]=1;            
        }
        for(int j=0; j<n; j++)
        {
            if(obstacleGrid[0][j]) 
            {
                A[0][j]=0;
                for(int k=j; k<n; k++) A[0][k]=0;
                break;
            }
            else A[0][j]=1;        
        }
        for(int i=1; i<m; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(obstacleGrid[i][j]) A[i][j]=0;
                else A[i][j]=A[i-1][j]+A[i][j-1];
            }
        }
        return A[m-1][n-1];
    }
};