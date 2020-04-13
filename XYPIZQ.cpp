/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll T;
	cin>>T;
	while(T--)
	{
		ll N,t,x,y,z,m,n,q;
		cin>>N>>t>>x>>y>>z;
		if(x==z)
		{
			if(t==1 || t==3)
			{
				m=x;
				n=N+N+1;
			}
			else
			{
				m=0;
				n=0;
			}
		}
		else
		{
			if(t==1)
			{
				m=N+N+1-z;
				n=N+N+1;
			}
			else if(t==3)
			{
				m=N+N+1-x;
				n=N+N+1;
			}
			else
			{
				m=N+N+1-y-y;
				n=N+N+1;
			}
		}
		q=__gcd(m,n);
		if(m!=0 && n!=0)
		{
			m/=q;
			n/=q;
		}
		cout<<m<<" "<<n<<"\n";

	}



	return 0;
}