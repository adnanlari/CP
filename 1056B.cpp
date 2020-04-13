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

    
	ll n,m,ans=0;
	cin>>n>>m;
	if(m==1 )
	{
		cout<<n*n<<"\n";
		return 0;	}
	if(n<=m)
	{
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=n;j++)
			{
				if((i*i+j*j)%m == 0)
					ans++;
			}
		}

		cout<<ans<<"\n";
		return 0;

	}

	
	for(ll i=1;i<=m;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			if((i*i+j*j)%m == 0)
				ans++;
		}
	}

	ans=((n/m)*(n/m))*ans;
	//cout<<ans<<"\n";
	ll c=n%m,u=0;
	for(ll i=1;i<=c;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			if((i*i+j*j)%m == 0)
				u++;
		}
	}
	ans+=(n/m)*u;
	u=0;
	for(ll i=1;i<=m;i++)
	{
		for(ll j=1;j<=c;j++)
		{
			if((i*i+j*j)%m == 0)
				u++;
		}
	}
	ans+=(n/m)*u;
	for(ll i=1;i<=c;i++)
	{
		for(ll j=1;j<=c;j++)
		{
			if((i*i+j*j)%m == 0)
				ans++;
		}
	}

	cout<<ans<<"\n";



	return 0;
}	