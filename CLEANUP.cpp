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
		ll n,m,z=1;
		cin>>n>>m;
		map <ll,ll> A;
		while(m--)
		{
			ll x;
			cin>>x;
			A[x]=1;
		}
		vector <ll> chef,ass;
		for(ll i=1;i<=n;i++)
		{
			if(!A[i])
			{
				if(z)
				{
					z=0;
					chef.pb(i);
				}
				else
				{
					z=1;
					ass.pb(i);
				}
			}

		}
		for(ll i=0;i< chef.size();i++)
			cout<<chef[i]<<" ";
		cout<<"\n";
		for(ll i=0;i<ass.size();i++)
			cout<<ass[i]<<" ";
		cout<<"\n";
	}



	return 0;
}