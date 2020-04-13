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
ll n,m;
bool S(ll a[],ll l,ll r,ll sum )
{
	if(l>r)
	{
		if(sum==m)
			return true;
		else 
			return false;

	}
	return S(a,l+1,r,sum+a[l]) | S(a,l+1,r,sum) ;
}
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
    	
    	cin>>n>>m;
    	ll a[n];
    	for(ll i=0;i<n;i++)
    		cin>>a[i];

    
    if(S(a,0,n-1,0))
    	cout<<"Yes\n";
    else
    	cout<<"No\n";
	

}

	return 0;
}