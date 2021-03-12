class Solution{
    public:
    // Function to find the subarray with given sum k
    // arr: input array
    // n: size of array
    vector<int> subarraySum(int arr[], int n, int s){
        
        int i =0, j = 0, sum =0;
        for(;i<n;i++)
        {
            sum += arr[i];
            while(sum>s){
                sum -= arr[j]; j++;
            }
            if(sum == s) return {j+1, i+1};
        }
        
        return {-1};
        
    }
};
