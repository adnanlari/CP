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

    
	ll q;
	cin>>q;
	while(q--)
	{
		ll l,r,d;
		cin>>l>>r>>d;
		ll x=l/d;
		ll y=l%d;
		if(x>0)
		{
			if(x==1 && y!=0)
				cout<<d<<"\n";
			else if(x>1)
				cout<<d<<"\n";
		}
		if(x==0 ||(x==1 && y==0))
		{
			ll t=r/d;
			cout<<((t+1)*d)<<"\n";
		}

	}



	return 0;
}