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
		ll n,x,max,ans=0;
		cin>>n;
		cin>>x;
		max=x;
		ans++;
		for(ll i=1;i<n;i++)
		{
			cin>>x;
			if(x<=max)
			{
				ans++;
				max=x;
			}
		}
		cout<<ans<<"\n";

	}



	return 0;
}