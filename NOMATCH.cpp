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
#define pb push_back
#define mp make_pair

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
		ll n,sum=0;
		cin>>n;
		ll A[n];
		for(ll i=0;i<n;i++)
			cin>>A[i];
		sort(A,A+n);
		for(ll i=0;i<n/2;i++)
			sum+=abs(A[n-1-i]-A[i]);
		cout<<sum<<"\n";
	}



	return 0;
}			