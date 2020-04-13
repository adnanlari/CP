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

ll gcd(ll x,ll y)
{
	if(y==0)
		return x;
	else 
		return gcd(y,x%y);
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
    
	ll a,b;
	cin>>a>>b;
	ll x=max(a,b);
	ll y=min(a,b);
	ll z=x-y;
	ll l=gcd(x,y);
	l=(x*y)/l;

	ll f=INT_MAX,ans=0;
	for(ll i=0;i<=x-y;i++)
	{
		ll q=gcd(x+i,y+i);
		q=((x+i)*(y+i))/q;
		//cout<<q<<"\n";
		if(q<f)
		{
			ans=i;
			f=q;
		}

	}
	cout<<ans<<"\n";



	return 0;
}