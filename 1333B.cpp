/*******************************************
* AUTHOR : Adnan Masroor :-)
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
	//the main code starts here
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,f=1;
		cin>>n;
		ll a[n],b[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<n;i++)
			cin>>b[i];
		ll x=n,y=n;
		for(ll i=n-1;i>=0;i--)
		{
			if(a[i]==1)
				x=i;
			if(a[i]==-1)
				y=i;
		}
		for(ll i=n-1;i>=0;i--)
		{
			if(b[i]>a[i])
			{
				if(x>=i)
					f=0;
			}
			else if(b[i]<a[i])
			{
				if(y>=i)
					f=0;
			}
		}
		if(f)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}



	return 0;
}