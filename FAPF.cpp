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
		ll n,q;
		cin>>n>>q;
		ll x1[n],x2[n];
		for(ll i=0;i<n;i++)
		{
			cin>>x1[i];
			x2[i]=x1[i];
		}
		sort(x2,x2+n);
		while(q--)
		{
			ll x,y;
			cin>>x>>y;
			cout<<abs(x1[x-1]-x1[y-1])+y-x<<" ";
			cout<<upper_bound(x2,x2+n,max(x1[x-1],x1[y-1]))-lower_bound(x2,x2+n,min(x1[x-1],x1[y-1]))<<"\n";
		}
	}



	return 0;
}