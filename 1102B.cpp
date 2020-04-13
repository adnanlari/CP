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

    
	ll n,k,flag=1,m=INT_MIN;
	cin>>n>>k;
	ll B[5001]={0},ans[n+1];
	vector <pair <ll,ll>> A(n+1);
	A[0].first=0;
	A[0].second=0;
	for(ll i=1;i<=n;i++)
	{
		cin>>A[i].first;
		A[i].second=i;
		B[A[i].first]++;
	}
	for(ll i=1;i<=5000;i++)
	{
		if(B[i]>k)
			flag=0;
	}
	sort(A.begin(),A.end());
	for(ll i=1;i<=n;i++)
	{
		ll x=i%k;
		if(!x) x=k;
		ans[A[i].second]=x;
	}
	if(flag )
	{
		cout<<"YES\n";
		for(ll i=1;i<=n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
	}
	else
		cout<<"NO\n";




	return 0;
}