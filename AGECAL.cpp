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
		ll n;
		cin>>n;
		ll a[n+1],b[n+1];
		a[0]=b[0]=0;
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
			b[i]=b[i]+b[i-1];
		}
		ll db,dc,mb,mc,yb,yc;
		cin>>yb>>mb>>db>>yc>>mc>>dc;
		ll ans=0;
		if(yb==yc)
		{
			if(mb==mc)
				ans+=dc-db+1;
			else
			{
				ans+=a[mb]-db+1;
				ans+=b[mc]-b[mb];
				ans-=(a[mc]-dc);
			}
			cout<<ans<<"\n";
			continue;

		}
		
		ans+=b[n]-b[mb-1]-db+1;
		if(yb%4==0)
			ans++;
		ll x=(yc-yb)/4;
		if((yc-yb)%4==0 && x>0)
			x--;
		ans+=x*((4*b[n])+1);
		ll y=yb+(x*4)+1;
		while(y<yc)
		{
			ans+=b[n];
			if(y%4==0)
				ans++;
			y++;
		}
		ans+=b[mc-1]+dc;
		cout<<ans<<"\n";


	}



	return 0;
}