class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(vector<string> &arr) {
	    sort(arr.begin(), arr.end(), [&](string &x, string &y){
	        string z = x +y;
	        string m = y +x;
	        return z.compare(m)>0?1:0;
	    });
	    
	    string ans = "";
	    for(auto x : arr)
	   ans +=x;
	   return ans;
	}
};
