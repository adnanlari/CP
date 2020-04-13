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

ll count_digits(ll x)
{
	ll c=0;
	while(x!=0)
	{
		c++;
		x/=10;
	}
	return c;
}

ll power(ll x,ll y)
{
	if(y==0)
		return 1;
	else if(y&1)
	{
		ll q=power(x,y/2);
		return q*q*x;
	}
	else
	{
		ll q=power(x,y/2);
		return q*q;
	}
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
		ll l,d,s,c,flag=0;
		cin>>l>>d>>s>>c;
		c+=1;
		d-=1;
		l=ceil((float)l/(float)s);
		if(count_digits(c)*d >= 10)
			flag=1;
		else
		{
			ll x=power(c,d);
			if(x>=l)
				flag=1;
		}
		if(flag)
			cout<<"ALIVE AND KICKING\n";
		else
			cout<<"DEAD AND ROTTING\n";
	}



	return 0;
}