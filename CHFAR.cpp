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
		ll n,k,c=0;
		cin>>n>>k;
		for(ll i=1;i<=n;i++)
		{
			ll x;
			cin>>x;
			if(x>1)
				c++;
		}
		if(c<=k)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}



	return 0;
}