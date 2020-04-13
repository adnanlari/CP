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
    
	ll n,q;
	cin>>n>>q;
	ll f[n+2];
	f[0]=0;
	for(ll i=1;i<=n;i++)
	{
		cin>>f[i];
		f[i]=f[i]^f[i-1];
	}
	f[n+1]=f[n]^f[n];
	/*for(ll i=0;i<=n+1;i++)
		cout<<f[i]<<" ";
	cout<<"\n";*/
	while(q--)
	{
		ll x;
		cin>>x;
		x=x%(n+1);
		if(!x)
			x=n+1;
		cout<<f[x]<<"\n";
	}




	return 0;
}