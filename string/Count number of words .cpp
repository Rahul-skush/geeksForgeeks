int countWords(string s)
{
    int n =s.length(), cnt =0;
    for(int i =0;i<n;i++)
    {
        int c = (int)(s[i]);
            if(c==92){i+=1; continue;}
        if(isalpha(s[i]))
        {
            while(i<n && isalpha(s[i]))i++;
            cnt++;
            if(i==n) return cnt;
             i--;
        }
    }
    return cnt;
}
