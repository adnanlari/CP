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
    
	ll n,k,ans=0;
	cin>>n>>k;
	map <ll,ll> M;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		x%=k;
		M[x]++;
	}
	ans+=(M[0]/2)*2;
	for(ll i=1;i<k;i++)
	{
		ll x=k-i;
		if(i==x)
			ans+=(M[i]/2)*2;
		else
			ans+=min(M[i],M[x])*2;
		M[i]=0;
		M[x]=0;
	}
	cout<<ans<<"\n";



	return 0;
}