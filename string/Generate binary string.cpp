class Solution
{
	public:
	vector<string> res;
		vector<string> generate_binary_string(string s)
		{
		    backtrack(s, 0);
		    sort(res.begin(), res.end());
		    return res;
		}
		
		void backtrack(string s, int p)
		{
		    if(p==s.length())
		    {res.push_back(s); return ;}
		    string str = s;
		    if(s[p]=='?') 
		    {str[p] = '1';
		    backtrack(str,p+1);
		    str[p] = '0';
		    backtrack(str, p+1);}
		    else
		    backtrack(s, p+1);
		}
};
