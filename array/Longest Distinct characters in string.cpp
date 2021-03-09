int longestSubstrDitinctChars (string S)
{
    int i=0, j=0, ans =0;
    int a[26]={0};
    for(;i<S.length();i++)
    {
        if(a[S[i]-'a']==1)
        {
            ans = max(ans, i-j);
            while(i>j && a[S[i]-'a']==1)
            {
                a[S[j]-'a']--;
                j++;
            }
        }
        a[S[i]-'a']++;
    }
    ans = max(ans, i-j);
    return ans;
}
