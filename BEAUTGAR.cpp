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
		string s;
		ll ans=0,cR=0,cG=0,cGG=0,cRR=0;
		cin>>s;
		ll n=s.length();
		if(n%2==0)
		{
			if(s[0]=='R')
			{ 
				cR++;
				if(s[n-1]=='R')
					cRR++;

			}
			else if(s[0]=='G')
			{
				cG++;
				if(s[n-1]=='G')
					cGG++;
			}
			for(ll i=1;i<n;i++)
			{
				if(s[i]=='R')
				{ 
					cR++;
					if(s[i-1]=='R')
						cRR++;

				}
				else if(s[i]=='G')
				{
					cG++;
					if(s[i-1]=='G')
						cGG++;
				}
			}
			if(cR==cG)
			{
				if(cGG==cRR && (cGG==1 || cGG==0))
					ans=1;
			}
		}
		//cout<<cR<<cG<<cGG<<cRR;
		if(ans)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}



	return 0;
}