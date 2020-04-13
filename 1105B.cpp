/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,k;
	cin>>n>>k;
	string s,x="";
	cin>>s;
	ll A[26]={0};
	x+=s[0];
	if(x.length()==k)
			{
				A[(int)x[0]-97]++;
				x="";
			}
	for(ll i=1;i<n;i++)
	{


		if(s[i]==s[i-1])
		{
			x+=s[i];
			if(x.length()==k)
			{
				A[(int)x[0]-97]++;
				x="";
			}
		}
		else
		{
			x="";
			x+=s[i];
		}
	}
	ll ans=INT_MIN;
	for(ll i=0;i<26;i++)
	{
		ans=max(A[i],ans);
	}
	cout<<ans<<"\n";



	return 0;
}