class Solution
{
  public:
    vector<int> kTop(int a[], int n, int k) 
    { 
        vector<int> v;
        vector<int> top(k+1);
        unordered_map<int, int> freq;
        for(int j = 0;j<n;j++)
        {
            freq[a[j]]++;
            top[k] = a[j];
            
            auto it = find(top.begin(), top.end(), a[j]);
            int i = distance(top.begin(), it) -1;
            for(;i>=0;i--)
            {
                if(freq[top[i]]<freq[top[i+1]])
                {
                    swap(top[i], top[i+1]);
                }
                else if ((freq[top[i]] == freq[top[i + 1]]) 
                     && (top[i] > top[i + 1])) 
                swap(top[i], top[i + 1]); 
               else
                break; 
            }
             for (int i = 0; i < k && top[i] != 0; ++i) 
            v.push_back(top[i]);
        }
        return v;
    }
};
