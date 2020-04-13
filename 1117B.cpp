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
    
	ll n,m,k,c=0;
	cin>>n>>m>>k;
	ll a[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(ll i=n-1;i>=0;i++)
	{
		if(a[i]==a[n-1])
			c++;
		else
			break;
	}
	if(c*k>=m)
	{
		cout<<m*a[n-1]<<"\n";
		return 0;
	}
	else
	{
		ll x=(m/(c*k+1))*(c*k*a[n-1]+a[n-1-c]);
		ll y=m%(c*k+1);
		x+=(y*a[n-1]);
		cout<<x<<"\n";
	}



	return 0;
}