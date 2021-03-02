bool find3Numbers(int arr[], int N, int X)
    {
        vector<int> mp(100003,0);
        for(int i =0;i<N;i++)
        mp[arr[i]]++;
        for(int i =0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                int diff = X - (arr[i] + arr[j]);
                if(diff>0 && mp[diff]>0)
                {
                    mp[arr[i]]--;
                    mp[arr[j]]--;
                    if(mp[diff]>0) return true;
                     mp[arr[i]]++;
                    mp[arr[j]]++;
                }
            }
        }
        return false;
        
        
    }
