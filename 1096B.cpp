/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
#define CFM 998244353
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,i,j,k,ans,l;
	cin>>n;
	string s;
	cin>>s;
	s=s.substr(0,1)+s;
	for(i=1;i<=n;i++)
	{
		if(s[i]!=s[i-1])
			break;
	}
	for(j=n;j>=1;j++)
	{
		if(s[j]!=s[j-1])
			break;
	}
	if(i==n+1)
	{
		if(n%2)
		{
			ans=n;
			l=(n+1)/2;
			ans=(ans*l)%CFM;
		}
		else
		{
			ans=n+1;
			l=n/2;
			ans=(ans*l)%CFM;
		}
	}
	else
	{

	}



	return 0;
}