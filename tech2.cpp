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

    
	ll n;
	cin>>n;
	string s,a="";
	cin>>s;
	ll l=s.length();
	if(l%2==0)
		n=n%(l-1);
	else
		n=n%(l/2+1);
	while(n--)
	{
		a="";
		for(ll i=0;i<l;i+=2)
			a+=s.substr(i,1);
		ll x;
		if(l%2==0)
			x=l-1;
		else
			x=l-2;
		for(ll i=x;i>=0;i-=2)
			a+=s.substr(i,1);
		s=a;

	}
	cout<<s<<"\n";



	return 0;
}