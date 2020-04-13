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
	ll x[n+1],y[n+1],a[n+1],b[n+1];
	map <pair<ll,ll>,ll> A;
	ll tx=0,ty=0;
	for(ll i=1;i<=n;i++)
		cin>>x[i]>>y[i];
	for(ll i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=n;j++)
		{
			A[{x[i]+a[j],y[i]+b[j]}]++;
				if(A[{tx,ty}] <= A[{x[i]+a[j],y[i]+b[j]}])
			{
				tx=x[i]+a[j];
				ty=y[i]+b[j];
			}
		}
	}
	cout<<tx<<" "<<ty<<"\n";




	return 0;
}