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
		ll n,k,d,flag=1,flag2=1;
		cin>>n>>k>>d;
		ll A[n+1],B[n+1];
		A[0]=B[0]=0;
		for(ll i=1;i<=n;i++)
			cin>>A[i];
		for(ll i=1;i<=n;i++)
			cin>>B[i];
		for(ll i=1;i<=n;i++)
		{
			A[i]+=A[i-1];
			B[i]+=B[i-1];
		}
		for(ll i=k;i<=n;i++)
		{
			ll x=A[i]-A[i-k]+B[i]-B[i-k];
			if(x>=d)
				flag=0;
		}
		if(flag)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}



	return 0;
}