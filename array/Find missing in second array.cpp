	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    vector<long long> v;
	   unordered_map<int, int> mp;
	    for(int i =0;i<N;i++)
	    mp[A[i]]++;
	    
	    for(int i =0;i<M;i++)
	    if(mp.count(B[i])>0)
	    mp[B[i]]=0;
	    
	    for(int i =0;i<N;i++)
	    if(mp[A[i]]>0) {v.push_back(A[i]); mp[A[i]]--;}
	    return v;
	} 
};
