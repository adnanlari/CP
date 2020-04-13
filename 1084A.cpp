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

    
	ll n,max=INT_MIN,x=0,ans=0;
	cin>>n;
	ll a[n+1];
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		
		ans+=a[i]*(i-1);
}
	cout<<ans*4<<"\n";




	return 0;
}