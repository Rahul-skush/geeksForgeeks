 int maxIndexDiff(int arr[], int n) 
    { 
        stack<pair<int, int>> st;
        st.push({arr[n-1], n-1});
        for(int i =n-2;i>=0;i--)
        {
            if(st.top().first<arr[i])
            st.push({arr[i], i});
        }
        
        int lst = 0, ans =0;
        for(int i =0;i<n;i++)
        {
            while(st.top().first>=arr[i])
            {
                lst = st.top().second;
                st.pop();
                if(st.empty()) break;
            }
            ans = max(ans, lst - i);
            if(st.empty()) break;
        }
        
        return ans;
        
    }
