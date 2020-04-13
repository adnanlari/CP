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

    
	ll n,k;
	cin>>n>>k;
	ll x=min(n,k);
	if(x==k)
		x-=1;
	while(1)
	{
		if(n%x==0)
		{
			//cout<<x<<" ";
			ll ans=(n/x)*k;
			ans+=x;
			cout<<ans<<"\n";
			break;
		}
		x--;
	}



	return 0;
}