class Solution{
public:
    int maxGold(int m, int n, vector<vector<int>> M)
    {
        int ans = 0;
        n = M.size(); m =M[0].size();
       for(int j =1;j<m;j++)
       {
           for(int i=0;i<n;i++)
           {
               int x = 0;
               if(i>=1 && j>=1)
               x = max(M[i-1][j-1], x);
               if(i+1<n && j>=0)
               x = max(x, M[i+1][j-1]);
               x = max(x, M[i][j-1]);
               M[i][j] += x; 
                ans = max(ans, M[i][j]);
           }
       }
       for(int j =0;j<m;j++)
       {
           for(int i=0;i<n;i++)
           { 
                ans = max(ans, M[i][j]);
           }
       }
       
       return ans;
    }
};
