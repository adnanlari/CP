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

    
	ll n,k,y=0,z=0;
	cin>>n>>k;
	set <ll> s;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		s.insert(x);
	}
	for(ll i=0;i<k;i++)
	{
		if(s.empty())
			cout<<"0\n";
		else
		{
			y=(*(s.begin()))-z;
			z=(*(s.begin()));
			s.erase(s.begin());
			cout<<y<<"\n";
		}
	}



	return 0;
}