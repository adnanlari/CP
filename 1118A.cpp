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
    
	ll q;
	cin>>q;
	while(q--)
	{
		ll n, a,b;
		cin>>n>>a>>b;
		ll ans=min((n/2)*(a+a),(n/2)*b);
		ans+=(n%2)*a;
		cout<<ans<<"\n";
	}



	return 0;
}