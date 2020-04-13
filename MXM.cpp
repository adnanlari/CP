/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
		ll n;
		cin>>n;
		ll A[n+1];
		A[0]=0;
		for(ll i=1;i<=n;i++)
		{
			cin>>A[i];
			A[i]+=A[i-1];
		}
		ll l=1,r=n;
		while(l+1!=r && l<=r)
		{
			ll mid=l+(r-l)/2;
			if(A[n]-A[mid]>A[mid]-A[l-1])
				l=mid+1;
			else
				r=mid;

		}
		ll x=abs(A[n]-A[l]-A[l]),y=abs(A[n]-A[r]-A[r]);
		if(x<=y)
			cout<<l<<"\n";
		else
			cout<<r<<"\n";
	}



	return 0;
}