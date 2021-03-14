class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        int sum=0, cnt =0, cnt0=0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]>=1) sum += arr[i]-1;
            else
            if(arr[i]<=-1) {sum += -arr[i] -1; cnt++;}
            else
            cnt0++;
        }
        if(cnt%2==0) return sum + cnt0;
        if(cnt0>=1) return sum +  cnt0;
        return sum + 2;
    }
};
