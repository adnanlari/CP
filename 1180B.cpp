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
    
	ll n,cp0=0,cp=0;
	cin>>n;
	vector <pair<ll,ll>> a;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		a.pb(mp(x,i));
		if(x>=0)
			cp0++;
		if(x>0)
			cp++;

	}
	if(n%2==0)
	{
		for(ll i=0;i<n;i++)
		{
			if(a[i].first >= 0)
				a[i].first=a[i].first*(-1)-1;
			cout<<a[i].first<<" ";
		}
	}
	else
	{
		sort(a.begin(),a.end(), greater<>());
		for(ll i=1;i<n;i++)
		{
			if(a[i].first >= 0)
				a[i].first=a[i].first*(-1)-1;
		}
		if(a[0].first>=0 && a[0].first<abs(a[n-1].first) && a[n-1].first<0)
		{
			a[0].first=a[0].first*(-1)-1;
			a[n-1].first=a[n-1].first*(-1)-1;
		}
		if(cp==0)
		{
			ll k;
			for( k=0;k<n;k++)
			{
				if(a[k].first < -1)
					break;
			}
			if(k<n)
				a[k].first=a[k].first*(-1)-1;
			else
				a[0].first=a[0].first*(-1)-1;
		}
		ll b[n];
		for(ll i=0;i<n;i++)
			b[a[i].second]=a[i].first;
		for(ll i=0;i<n;i++)
			cout<<b[i]<<" ";
	}
	cout<<"\n";




	return 0;
}





