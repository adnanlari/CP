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
		ll n,k;
		cin>>n>>k;
		ll x=k/(n-1) +1 ;
		if(k%(n-1) == 0)
			x-=1;
		ll ans=(n%MOD + k%MOD - 2 + MOD)%MOD;
		ans=(ans * (x%MOD))%MOD;
		ll i,j;
		if(x%2)
		{
			i=(x+1)/2;
			j=((x%MOD) * (i%MOD))%MOD;
		}
		else
		{
			i=x/2;
			j=((i%MOD) * ((x+1)%MOD))%MOD;
		}
		j=(j* ((n-1)%MOD))%MOD;
		ans=(ans - j + MOD)%MOD;
		cout<<ans<<"\n";

		

	}



	return 0;
}