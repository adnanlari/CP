/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,a=INT_MAX,ans=INT_MAX,ans1;
	cin>>n;
	ll A[n];
	for(ll i=0;i<n;i++)
	{
		cin>>A[i];
		a=min(a,A[i]);
	}
	ans1=a;
	for(ll i=a;i<=100;i++)
	{
		ll x=0;
		for(ll j=0;j<n;j++)
		{
			if(i!=A[j])
				x+=abs(i-A[j])-1;

		}
		if(x<ans)
		{
			ans=x;
			ans1=i;
		}
	}
	cout<<ans1<<" "<<ans<<"\n";




	return 0;
}