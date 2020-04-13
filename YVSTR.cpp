/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,ans=0,f=0;
		cin>>n;
		ll M[200]={0};
		string s;
		ll w=1;
		cin>>s;
		
		for(ll i=1;i<n;i++)
		{
			if(s[i]==s[i-1])
			{
				if(f)
					ans++;
				w++;
				if(i==n-1)
				{
					M[(int)s[i]]=max(M[(int)s[i]],w);
					w=0;
				}
			}
			else
			{
				f=1;
				ans++;
				M[(int)s[i-1]]=max(M[(int)s[i-1]],w);
				w=1;
				if(i==n-1)
				{
					M[(int)s[i]]=max(M[(int)s[i]],w);
					w=0;
				}
			}


		}
		for(ll i=97;i<=122;i++)
			ans+=M[i];
		
		map <string,ll> q;
		for(ll i=0;i<n-1;i++)
		{
			string x=s.substr(i,2);
			if(x[0]!=x[1] && (!q[x]))
			{
				q[x]=1;
				ans++;
			}
		}
		for(ll i=0;i<n-2;i++)
		{
			string x=s.substr(i,3);
			if(x[0]!=x[1] && x[1]==x[2] && (!q[x]))
			{

			}
		}
		cout<<ans<<"\n";

	}



	return 0;
}