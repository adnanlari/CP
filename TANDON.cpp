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

ll gcdExtended(ll a, ll b, ll *x, ll *y) 
{ 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
    ll x1, y1; 
    ll gcd = gcdExtended(b%a, a, &x1, &y1); 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
    return gcd; 
} 

ll modInverse(ll b, ll m) 
{ 
    ll x, y; // used in extended GCD algorithm 
    ll g = gcdExtended(b, m, &x, &y); 
  
    // Return -1 if b and m are not co-prime 
    if (g != 1) 
        return -1; 
  
    // m is added to handle negative x 
    return (x%m + m) % m; 
} 

ll modDivide(ll a, ll b) 
{ 
    a = a % MOD; 
    ll inv = modInverse(b, MOD); 
    return (inv * a) % MOD; 
}

ll powmod(ll a,ll n)
{
	if(n==0)
		return 1;
	if(n%2)
		return (powmod(a,n/2)*powmod(a,n/2)*a)%MOD;
	return (powmod(a,n/2)*powmod(a,n/2))%MOD;
}



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
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,ans=0;
		cin>>n>>k;
		if(k==10)
			ans=1;
		else if(k==5)
		{
			if(n==1)
				ans=2;
			else if(n==2)
				ans=3;
			else
			{
				ans=3;
				n-=1;
				ll x=powmod(10,n)-1;
				ans+=modDivide(x,9);

			}
		}
		cout<<ans<<"\n";
	}



	return 0;
}