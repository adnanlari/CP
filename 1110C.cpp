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
        ll X[26];
        X[0]=0;
        for(ll i=1;i<=25;i++)
        	X[i]=2*(X[i-1]+1)-1;
        //cout<<X[25];
        map<ll,ll> M;
        M[33554431]=1082401;
        M[16777215]=5592405;
    
	ll q;
	cin>>q;
	while(q--)
	{
		ll a;
		cin>>a;
		for(ll i=1;i<=25;i++)
		{
			if(X[i]>a)
			{
				cout<<X[i]<<"\n";
				break;
			}
			else if(X[i]==a)
			{
				ll z=1,f=0,x=0,y=0;
				while(a!=0)
				{
					if(f)
					{
						x+=z;
						f=0;
					}
					else
					{
						y+=z;
						f=1;
					}
					z*=2;
					a/=2;
				}
				cout<<__gcd(x,y)<<"\n";
				break;
			}
		}



	}



	return 0;
}