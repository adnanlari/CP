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
ll M=1000000007,BMOD=100000000700000;

ll pow(ll a,ll b)
{
	ll res=1;
	a=a%M;
	while(b>0)
	{
		if(b&1)
			res=(res*a)%M;
		b=b>>1;
		a=(a*a)%M;
	}
	return res;
}

ll mD(ll a,ll b)
{
	a=a%M;
	ll inv = pow(b,M-2);
	return (a*inv)%M;
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

		ll n,k,l,x;
		cin>>n>>k;
		x=(k*2+(26-k))*2;
		while(n--)
		{
			cin>>l;
			ll den,num;
			ll o=52;
			ll y=__gcd(x,o);
			if(l%2)
				l-=1;
			ll tx=x/y;
			ll td=52/y;
			num=pow(tx,l/2);
			den=(pow(td,l/2)*pow(o,l/2))%M;
			//cout<<num<<" "<<den<<"\n";
			cout<<(mD(num,den))<<"\n";
		}
	}



	return 0;
}