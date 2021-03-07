int minDist(int a[], int n, int x, int y) {
   int xp = INT_MAX, yp = INT_MAX;
   int ans = xp;
   for(int i =0;i<n;i++)
   {
       if(a[i]==x)
       xp = i;
       else
       if(a[i]==y)
       yp = i;
       
       if(xp != INT_MAX && yp != INT_MAX)
       ans = min(ans, abs(xp - yp));
   }
   return ans==INT_MAX?-1: ans;
}
