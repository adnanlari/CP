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
    
	ll n,m;
	cin>>n>>m;
	if(m%n)
		cout<<"-1\n";
	else
	{
		ll x=m/n,ans=0;
		while(!(x%2))
		{
			x/=2;
			ans++;
		}
		while(!(x%3))
		{
			ans++;
			x/=3;
		}
		if(x==1)
			cout<<ans<<"\n";
		else
			cout<<"-1\n";

	}



	return 0;
}