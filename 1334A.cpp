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
		bool f=true;
		ll a[n][2];
		for(ll i=0;i<n;i++)
			cin>>a[i][0]>>a[i][1];
		if(a[0][0]<a[0][1])
			f=false;
		for(ll i=1;i<n;i++)
		{
			if(a[i][0]<a[i][1])
				f=false;
			if(a[i][0]<a[i-1][0] || a[i][1]<a[i-1][1])
				f=false;
			if(a[i][0]-a[i-1][0]<a[i][1]-a[i-1][1])
				f=false;
		}
		if(f)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}	



	return 0;
}