class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_map<int, int> mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]] = i;
	    }
	    
	    for(int i =0;i<n;i++)
	    {
	        int diff = x - arr[i];
	        if(mp.count(diff)>0 && mp[diff]!=i)
	        return 1;
	    }
	    return 0;
	}
};
