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

vector <ll> V[2000+1];

ll height(ll i)
{
	queue <ll> Q;
	Q.push(i);
	ll a=0;
	while(!Q.empty())
	{
		ll l=Q.size();
		for(ll i=0;i<l;i++)
		{
			ll x=Q.front();
			Q.pop();
			for(ll j=0;j<V[x].size();j++)
				Q.push(V[x][j]);
		}
		a++;
	}
	return a;
}

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,ans=-1;
	cin>>n;
	ll A[n+1];
	
	for(ll i=1;i<=n;i++)

	{
		cin>>A[i];
		if(A[i]!=-1)
			V[A[i]].push_back(i);
	}
	for(ll i=1;i<=n;i++)
	{
		if(A[i]==-1)
			ans=max(height(i),ans);
	}

	cout<<ans<<"\n";


	return 0;
}