class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       if(n==1)return 0;
       int l = 0, h = n-1;
       if(arr[h]>=arr[h-1]) return h;
       if(arr[l]>=arr[l+1]) return l;
       while(l<=h){
           int m = (h+l)/2;
           if(arr[m]>=arr[m-1] && arr[m]>=arr[m+1]) return m;
           if(arr[m-1]>=arr[m]) h = m-1;
           else
           l = m+1;
       }
       return h;
       
    }
};
