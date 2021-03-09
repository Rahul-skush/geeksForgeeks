  public:
    string studentRecord(vector<vector<string>> S, int N) {
        string ans;
        int avgans = 0;
        for(auto x : S)
        {
            int sum = toInteger(x[1]) +  toInteger(x[2]) +  toInteger(x[3]);
            sum/=3;
            if(sum>avgans)
            {
                ans = x[0];
                avgans = sum;
            }
            else
            if(sum==avgans)
            {
                ans += " " +  x[0] ;
            }
        }
        
        return ans + " " + to_string(avgans);
    }
    
    int toInteger(string s)
    {
        int ans = 0;
        for(int i=0;i<s.length();i++)
        ans = ans*10 + (s[i] - '0');
        return ans;
    }
};
