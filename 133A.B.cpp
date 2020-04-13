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
		ll n,ma=0;
		cin>>n;
		bool f1=true,f2=true;
		ll a[n],b[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
			ma=max(ma,a[i]);
		}
		sort(a,a+ma);
		sort(a+ma,a+n);
		sort(b,b+n-ma);
		sort(b+n-ma,b+n);
		for(ll i=0;i<ma;i++)
		{
			if(a[i] != i+1)
				f1=false;
		}
		for(ll i=ma;i<n;i++)
		{
			if(i-ma+1 != a[i])
				f1=false;
		}
		for(ll i=0;i<n-ma;i++)
		{
			if(b[i] != i+1)
				f2=false;
		}
		for(ll i=n-ma;i<n;i++)
		{
			if(i-n+ma+1 != b][i])
				f2=false;
		}
		ll ans=0;
		if(f1) ans++;
		if(f2) ans++;
		cout<<ans<<"\n";
		if(f1) cout<<ma<<" "<<n-ma<<"\n";
		if(f2) cout<<n-ma<<" "<<ma<<"\n";


	}



	return 0;
}	