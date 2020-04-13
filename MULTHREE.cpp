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
		ll k,d0,d1,d2,sum=0;
		cin>>k>>d0>>d1;
		sum=(d0+d1)%3;
		d2=(d0+d1)%10;
		ll x=(k-3)/4;
		ll y=(k-3)%4;
		sum=(sum+d2)%3;
		sum=(sum+(2*(x%3))%3)%3;
		ll p=2;
		for(ll i=1;i<=y;i++)
		{
			ll d=(p*(d0+d1))%10;
			sum=(sum+d)%3;
			p*=2;
		}
		if(!sum)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}



	return 0;
}