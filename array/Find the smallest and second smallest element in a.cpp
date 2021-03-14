vector<int> minAnd2ndMin(int a[], int n) {
    int i = 0, j=0;
    while(j<n && a[i]==a[j]) j++;
    if(j==n) return {-1};
    if(a[i]>a[j]){
        int x = i; i = j; j =x;
    }
    for(int x =max(i, j)+1;x<n;x++)
    {
        if(a[x]<a[i] &&a[x]!=a[j]){
            j =i;
            i =x;
        }else
        if(a[x]<a[j] && a[x]!=a[i]) j =x;
    }
    //cout<<i<<" "<<j;
    if(a[i]==a[j]) return {-1};
    return {a[i], a[j]};
    
}
