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
	ll a[n],b[m];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	for(ll i=0;i<m;i++)
		cin>>b[i];
	ll ae=0,ao=0,be=0,bo=0;
	for(ll i=0;i<n;i++)
	{
		if(a[i]%2)
			ao++;
		else
			ae++;
	}
	for(ll i=0;i<m;i++)
	{
		if(b[i]%2)
			bo++;
		else
			be++;
	}
	cout<<min(ao,be)+min(ae,bo)<<"\n";




	return 0;
}