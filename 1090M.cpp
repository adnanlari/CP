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

    
	ll n,k,ans=-1,t=0;
	cin>>n>>k;
	ll a[n+1];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	a[n]=0;
	for(ll i=0;i<n;i++)
	{
		t++;
		if(a[i]==a[i+1])
		{
			ans=max(t,ans);
			t=0;
		}
	}
	ans=max(t,ans);
	cout<<ans<<"\n";





	return 0;
}	