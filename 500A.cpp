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

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,t;
	cin>>n>>t;
	ll a[n];
	for(ll i=1;i<n;i++)
		cin>>a[i];
	ll x=1;
	while(x<t)
		x+=a[x];
	if(x==t)
		cout<<"YES\n";
	else
		cout<<"NO\n";



	return 0;
}