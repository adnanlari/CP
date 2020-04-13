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

ll gcdExtented(ll a,ll b,ll& x,ll& y)
{
	if(a==0)
	{
		x=0;
		y=1;
		return b;
	}
	ll x1,y1;
	ll gcd=gcdExtented(b%a,a,x1,y1);
	x=y1-(b/a)*x1;
	y=x1;
	return gcd;
}
ll modInverse(ll b)
{
	ll x,y;
	ll g=gcdExtented(b,MOD,x,y);
	if(g!=1)
		return -1;
	return (x%MOD + MOD)%MOD;
}
ll modDivide(ll a,ll b)
{
	a=a%MOD;
	ll inv=modInverse(b);
	if(inv!=-1)
		return (inv*a)%MOD;
}
ll modexpo(ll a,ll n)
{
	if(n==0)
		return 1;
	else if(n%2==0)
		return (modexpo(a,n/2)*modexpo(a,n/2))%MOD;
	return (modexpo(a,(n-1)/2)*modexpo(a,(n-1)/2)*a)%MOD;
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
		ll n,k,m,nn;
		cin>>n>>k>>m;
		nn=n;
		
		//cout<<n<<"\n";
		ll p=modDivide(1,n),q=modDivide(n-1,n);
		//cout<<q<<"\n";
		ll ans=0;
		ll e=(m+1)/2;
		ll r=modexpo(q,e);
		ans=(1-r+MOD)%MOD;
		//cout<<ans<<"\n";
		if(m%2==0)
		{
			ll u=n-1,y=n+k,o=1;
			ll c=0,x=__gcd(u,y);
			while(x!=1 && c<e)
			{
				o=(o*modDivide(u/x,n))%MOD;
				c++;
				y/=x;
				//cout<<x<<" "<<u/x<<"\n";
				x=__gcd(u,y);
				//
				cout<<x<<"\n";
			}
			cout<<c<<"\n";
			r=modexpo(q,e-c);
			r=(r*o)%MOD;
			//cout<<y<<"\n";
			r=(r*modDivide(1,y))%MOD;
			ans=(ans+r)%MOD;
		}
		
		cout<<ans<<"\n";


	}



	return 0;
}