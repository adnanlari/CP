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

    ll n,k;
    cin>>n>>k;
    if(n<=k)
    	{cout<<"1\n"; return 0;}
    ll a[n+1];

    for(ll i=0;i<k;i++)
    	a[i]=1;
    a[k]=k;
    for(ll i=k+1;i<n;i++)
    {
    	a[i]=(a[i-1]+a[i-1])%MOD;
    	a[i]=(a[i]-a[i-k-1]+MOD)%MOD;
    }
    cout<<a[n-1]<<"\n";


	return 0;
}