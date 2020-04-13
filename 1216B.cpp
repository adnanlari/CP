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
	vector <pair<ll,ll>> a;
	ll x,y[n],ans=n;
	for(int i=0;i<n;i++ )
	{
		cin>>x;
		a.pb(mp(x,i));
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	{
		y[a[i].second]=n-i;
		ans+=a[i].first * (n-i-1);
	}
	cout<<ans<<"\n";
	for(int i=0;i<n;i++)
		cout<<y[i]<<" ";
	cout<<"\n";



	return 0;
}