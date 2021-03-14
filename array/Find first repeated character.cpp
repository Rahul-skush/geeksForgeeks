string firstRepChar(string s)
{
    int a[26] = {0};
    for(auto c : s)
    {
        string x="";
        x+=c;
        a[c-'a']++;
        if(a[c-'a']==2) return x;
    }
    return "-1";
}
