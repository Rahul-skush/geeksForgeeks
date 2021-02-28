class Solution {
private:
public:
	int minSwaps(vector<int>&nums){
	   int n = nums.size();
	   pair<int, int> v[n];
	    int cnt =0 ;
	    for(int i =0;i<nums.size();i++)
	   v[i] = make_pair(nums[i], i);
	   
	   sort(v, v + n);
	   vector<int> vis(n,0);
	   int ans = 0;
	   for(int i=0;i<n;i++)
	   {
	       if(vis[i] || v[i].second == i) continue;
	       
	       int j = i, cnt =0;
	       while(!vis[j])
	       {
	           vis[j] = 1;
	           j = v[j].second;
	           cnt++;
	       }
	       if(cnt>0)
	       ans += cnt -1;
	   }
	    
	    
	    return ans;
	    
	}
};
