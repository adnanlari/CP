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
    ll a[101]={0};
    for(ll i=1;i<=n;i++)
    {
    	ll r;
    	cin>>r;
    	while(r--)
    	{
    		ll x;
    		cin>>x;
    		a[x]++;
    	}
    }
    for(ll i=1;i<=100;i++)
    {
    	if(a[i]==n)
    		cout<<i<<" ";
    }
    cout<<"\n";
    
	




	return 0;
}