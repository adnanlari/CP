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

    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n;
		ll a[n+1];
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		cin>>k;
		ll key=a[k];
		sort(a+1,a+n+1);
		ll l=1,r=n;
		while(l<=r)
		{
			ll mid=l+(r-l)/2;
			if(key==a[mid])
			{
				cout<<mid<<"\n";
				break;
			}
			else if(key<a[mid])
				r=mid-1;
			else
				l=mid+1;
		}

	}



	return 0;
}