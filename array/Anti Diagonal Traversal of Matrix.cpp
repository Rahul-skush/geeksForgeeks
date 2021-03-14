class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        int n = matrix.size(), m = matrix[0].size();
        map<int, vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[i+j].push_back(matrix[i][j]);
            }
        }
        vector<int> v;
        for(auto x :mp)
        {
            for(auto y :x.second)
            v.push_back(y);
        }
        return v;
    }
};
