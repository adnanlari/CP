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
		ll n,ans=INT_MAX;
		cin>>n;
		ll A[n];
		for(ll i=0;i<n;i++)
			cin>>A[i];
		sort(A,A+n);
		for(ll i=0;i<n-1;i++)
			ans=min(A[i+1]-A[i],ans);
		cout<<ans<<"\n";
	}



	return 0;
}