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
		ll n,k;
		cin>>n>>k;
		ll A[n+1];
		A[0]=0;
		for(ll i=1;i<=n;i++)
			cin>>A[i];
		sort(A,A+n+1);
		for(ll i=1;i<=n;i++)
			A[i]+=A[i-1];
		cout<<(A[n]-A[k]-A[k])<<"\n";
	}



	return 0;
}	