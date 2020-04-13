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
    
	ll n,k,m;
	cin>>n>>k>>m;
	ll A[n+1];
	for(ll i=1;i<=n;i++)
		cin>>A[i];
	sort(A+1,A+n+1);
	ll i;float ans=0;
	for(i=n-1;i>0;i--)
	{
		if(A[i]!=A[i+1])
			break;
	}
	if(i<=m)
	{
		m=m-i;
		ll x=min(m,k*(n-i));
		ans=(float)((n-i)*A[n]+x)/(n-i);

	}
	else
	{
		ll sum=0;
		for(ll j=m+1;j<=n;j++)
		{
			sum+=A[j];
		}
		ans=(float)sum/(n-m);
	}
	cout<<fixed<<setprecision(10)<<ans<<"\n";





	return 0;
}