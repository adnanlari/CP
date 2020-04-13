/*******************************************
* AUTHOR : Adnan Masroor,Rajan and Savita
* 
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

    
	ll n,k;
	cin>>n>>k;
	vector <pair<ll,ll>> A;
	ll B[n+1],ans[n+1];
	for(ll i=1;i<=n;i++)
	{
		ll x;
		cin>>x;
		B[i]=x;
		A.pb(mp(x,i));
	}
	sort(A.begin(),A.end());
	vector <pair<ll,ll>> X;
	for(ll i=0;i<k;i++)
	{
		ll x,y;
		cin>>x>>y;
		X.pb(mp(x,y));
		

	}
	ll z=-1,p=0,y;
	for(ll i=0;i<n;i++)
	{
		//cout<<A[i].first<<" "<<A[i].second<<"\n";
		if(A[i].first == z)
			ans[A[i].second]=y;
		else
		{
			ans[A[i].second]=p;
			y=p;
			z=A[i].first;
		}
		p++;
	}
	for(ll i=0;i<k;i++)
	{
		ll a=X[i].first;
		ll b=X[i].second;
		if(B[a]>B[b])
			ans[a]--;
		else if(B[a]<B[b])
			ans[b]--;
	}
	for(ll i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	cout<<"\n";









	return 0;
}