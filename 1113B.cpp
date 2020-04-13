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
    
    ll P[101]={0};
    for(ll i=2;i*i<=100;i++)
    {
    	if(!P[i])
    	{
    		for(ll j=i*i;j<=100;j+=i)
    			P[j]=1;
    	}
    }
    vector <ll> prime;
    for(ll i=2;i<=100;i++)
    {
    	if(!P[i])
    		prime.pb(i);
    }
	ll n,ans=0,sum=0;
	cin>>n;
	ll A[n];
	for(ll i=0;i<n;i++)
	{
		cin>>A[i];
		sum+=A[i];
		ans+=A[i];
	}
	sort(A,A+n);
	for(ll i=0;i<prime.size();i++)
	{
		ll a=0,b=0,c=0;
		for(ll j=1;j<n;j++)
		{
			if(A[j]%prime[i]==0)
				a=A[j];
		}
		b=(a/prime[i])*(prime[i]-1);
		c=(prime[i]-1)*A[0];
		//cout<<prime[i]<<" "<<b<<" "<<c<<"\n";
		if(a)
			ans=min(ans,sum-b+c);
	}
	cout<<ans<<"\n";



	return 0;
}