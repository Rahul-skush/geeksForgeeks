class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            int i = 0, j = 0, cnt =0;
            if(n==1) return ar1[0] + ar2[0];
            int x, y, m;
            while(i<n || j<n)
            {
                if(i==n) {m = ar2[j]; j++; }
                else
                if(j==n) {m = ar1[i]; i++;}
                else
                {
                if(ar1[i]<=ar2[j]) {m = ar1[i]; i++;}
                else
                { m =ar2[j]; j++;}
                }
                cnt++;
                if(cnt == n)
                x = m;
                if(cnt == n+1)
                {y = m; break;}
            }
            return  x + y;
    }
};
