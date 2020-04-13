/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n;
	cin>>n;
	ll a[n+1],b[n/2+1];
	cin>>b[1];
	a[1]=0;
	a[n]=b[1];
	for(ll i=2;i<=n/2;i++)
	{
		cin>>b[i];
		if(b[i]<=b[i-1])
		{
			a[i]=a[i-1];
			a[n-i+1]=b[i]-a[i];
		}
		else
		{
			a[n-i+1]=a[n-i+2];
			a[i]=b[i]-a[n-i+1];
		}
	}
	for(ll i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";	



	return 0;
}