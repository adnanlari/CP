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
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		vector <ll> X;
		X.pb(a[0]);
		for(ll i=1;i<n;i++)
		{
			if(a[i]!=a[i-1])
				X.pb(a[i]);
		}
		n=X.size();
		if(n==1)
		{
			cout<<2*X[0]<<"\n";
			continue;
		}
		ll F[n],B[n];
		F[0]=X[0];
		B[n-1]=X[n-1];
		for(ll i=1;i<n;i++)
		{
			F[i]=__gcd(X[i],F[i-1]);
			B[n-1-i]=__gcd(X[n-i-1],B[n-i]);
		}
		ll Y[n];
		Y[0]=B[1];
		Y[n-1]=F[n-2];
		for(ll i=1;i<n-1;i++ )
			Y[i]=__gcd(F[i-1],B[i+1]);
		ll ans=INT_MIN;
		for(ll i=0;i<n;i++)
			ans=max(ans,Y[i]+X[i]);
		cout<<ans<<"\n";


	}



	return 0;
}