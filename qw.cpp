/*******************************************
* AUTHOR : Adnan Masroor :-)
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
	//the main code starts here
    
	ll l,m;
	cin>>l>>m;
	ll a[l][m+1];
	for(ll i=0;i<l;i++)
	{
		for(ll j=0;j<=m;j++)
			a[i][j]=0;
	}
	a[0][2]=1;a[0][3]=-1;
	ll ans=0;
	for(ll i=0;i<l-1;i++)
	{
		for(ll j=1;j<=m;j++)
			a[i][j]+=a[i][j-1];
		for(ll j=0;j<=m;j++)
		{
			if(a[i][j]>0)
			{
				a[i+1][0]+=a[i][j];
				ll x=(2*j+1)%m;
				a[i+1][x+1]-=a[i][j];
			}
		}
	}
	for(ll i=1;i<=m;i++)
	{
		a[l-1][i]+=a[l-1][i-1];
	}
	
	for(ll i=0;i<l;i++)
	{
		for(ll j=0;j<=m;j++)
		{
			cout<<a[i][j]<<" ";
			ans=(ans+a[i][j])%m;
		}
		cout<<"\n";
	}
	cout<<ans<<"\n";


	return 0;
}