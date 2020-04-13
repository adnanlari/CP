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

    ll n,bad=0;
    cin>>n;
	vector <ll> A[n+1];
	for(ll i=2;i<=n;i++)
	{
		ll x;
		cin>>x;
		A[x].pb(i);
	}
	for(ll i=1;i<=n;i++)
	{
		if(!A[i].empty() && !bad)
		{
			ll count=0;
			for(ll j=0;j<A[i].size();j++)
			{
				if(A[A[i][j]].empty())
					count++;
			}
			if(count<3)
				bad=1;
		}
	}
	if(bad)
		cout<<"No\n";
	else
		cout<<"Yes\n";



	return 0;
}