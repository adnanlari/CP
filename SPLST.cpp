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
		ll a,b,c,x,y,flag=0;
		cin>>a>>b>>c>>x>>y;
		if((a+b+c) == (x+y))
		{
			ll k=min(a,b);
			k=min(c,k);
			ll l=min(x,y);
			if(k <= l)
				flag=1;
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}



	return 0;
}