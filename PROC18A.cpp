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

    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,ans=INT_MIN;
		cin>>n>>k;
		ll a[n+1];
		a[0]=0;
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
			a[i]+=a[i-1];

		}
		for(ll i=k;i<=n;i++)
		{
			ll x=a[i]-a[i-k];
			ans=max(ans,x);
		}
		cout<<ans<<"\n";
	}



	return 0;
}