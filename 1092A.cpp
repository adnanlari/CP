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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,k;
    	cin>>n>>k;
    	ll a=n/k,b=n%k;
    	while(a--)
    	{
    		for(ll i=1;i<=k;i++)
    			cout<<(char)(i+96);
    	}
    	for(ll i=1;i<=b;i++)
    		cout<<(char)(i+96);
    	cout<<"\n";
    }

	



	return 0;
}