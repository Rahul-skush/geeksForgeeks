
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	
      
	int main()
	{
		std::ios::sync_with_stdio(false);
		
		int t;
		cin>>t;
		while(t--){
		string A, B;
		cin>>A>>B;
		int a[26] = {0};
		for(auto c : A)
		a[c-'a']++;
		int cnt =0, ans =1;
		for(int i=0;i<B.length();i++)
		{
		    
		    if(a[B[i]-'a']==0) {ans = 0;  break;}
		    a[B[i]-'a']--;
		    if(B[i]!=A[i]) cnt++;
		    if(cnt>2) {ans =0; break;}
		}
		if(cnt<2) ans = 0;
		cout<<ans<<endl; 
		}
		return 0;
	
	}
	
	
