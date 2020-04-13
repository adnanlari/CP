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

    
	ll n,ans=0,y=1;
	cin>>n;
	ll A[100]={0};
	while(n--)
	{
		ll x,i=0;
		cin>>x;
		while(x!=0)
		{
			if(x&1)
				A[i]++;
			i++;
			x=x>>1;
		}
	}
	for(ll i=0;i<100;i++)
	{
		ll x;
		if(A[i]%2)
		{
			x=(A[i]-1)/2;
			x*=A[i];
		}
		else
		{
			x=(A[i])/2;
			x*=A[i]-1;
		}
		ans+=x*y;
		y*=2;

	}
	cout<<ans<<"\n";



	return 0;
}