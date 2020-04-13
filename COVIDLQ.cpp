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
		ll n,x,flag=0;
		cin>>n;
		vector <ll> a;
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			if(x)
				a.pb(i);
		}
		for(ll i=1;i<a.size();i++)
		{
			if(a[i]-a[i-1]<6)
				flag=1;
		}
		if(flag)
			cout<<"NO\n";
		else
			cout<<"YES\n";

	}



	return 0;
}