int max_sum(int A[],int N)
{
   int cursum = 0;
   for(int i =0;i<N;i++)
   cursum += A[i];
   int curval = 0;
   for(int i=0;i<N;i++)
   curval += i*A[i];
   int ans =0;
   ans = max(ans, curval);
   for(int i=1;i<N;i++)
   {
       int nextval = curval - (cursum - A[i-1]) + A[i-1]*(N-1);
       curval = nextval;
       ans = max(curval, ans);
   }
   return ans;
}
