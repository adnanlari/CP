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
    string ref="abcdefghijklmnopqrstuvwxyz";
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,a,b;
		cin>>n>>a>>b;
		string x=ref.substr(0,b),ans="";
		ll i=n/b;
		for(ll j=1;j<=i;j++)
			ans=ans+x;
		ans=ans+ref.substr(0,n%b);
		cout<<ans<<"\n";

	}



	return 0;
}