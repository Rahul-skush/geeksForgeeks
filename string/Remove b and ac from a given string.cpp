class Solution
{
  public:
    string stringFilter(string str) 
    { 
        string s;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='b') str[i] = '1';
            else
                if(i+1<str.length())
                {
                    string s ="";
                    s+=str[i];
                    s+= str[i+1];
                    if(s=="ac") {str[i] = '1'; str[i+1]='1';i++;}
                }
        }
        for(auto c: str)
        if(c!='1') s+=c;
        return s;
    } 
};
