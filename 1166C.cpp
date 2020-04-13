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
    
	ll n;
	cin>>n;
	vector <ll> a;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		a.pb(abs(x));
	}
	sort(a.begin(),a.end());
	ll ans=0;
	for(ll i=0;i<n;i++)
		ans+=(upper_bound(a.begin(),a.end(),2*a[i])-a.begin())-i-1;
	cout<<ans<<"\n";





	return 0;
}