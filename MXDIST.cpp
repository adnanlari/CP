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
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n;
	cin>>n;
	ll a[n+1][2];
	for(ll i=1;i<=n;i++)
		cin>>a[i][0]>>a[i][1];
	ll x[n+1][n+1];
	for(ll i=1;i<=n;i++)
	{
		x[i][i]=0;
		for(ll j=i+1;j<=n;j++)
		{
			ll e=abs(a[i][0]-a[j][0]);
			ll f=abs(a[i][1]-a[j][1]);
			x[i][j]=(e*e)+(f*f);
			x[i][j]=max(x[i][j-1],x[i][j]);
		}


	}
	/*for(ll i=1;i<=n;i++)
	{
		for(ll k=1;k<i;k++)
			cout<<"  ";
		for(ll j=i;j<=n;j++)
			cout<<x[i][j]<<" ";
		cout<<"\n";
	}*/
	ll q;
	cin>>q;
	while(q--)
	{
		ll f,t,ans=INT_MIN;
		cin>>f>>t;
		for(ll i=f;i<=t;i++)
		{
			ans=max(ans,x[i][t]);
		}
		cout<<ans<<"\n";
	}



	return 0;
}