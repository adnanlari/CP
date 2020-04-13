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
    
	ll q;
	cin>>q;
	while(q--)
	{
		ll a,b,m;
		cin>>a>>b>>m;
		ll p=1,i;
		for( i=2;i<45;i++)
		{
			ll x=b-(p*a);
			ll y=x/(i-1);
			cout<<"x="<<x<<"y="<<y<<"\n";
			if(y<=m)
			{
				ll c=x%(i-1);
				ll d=i-1-c;
				cout<<i<<" "<<a<<" ";
				while(c--)
				{
					a+=y+1;
					cout<<a<<" ";
				}
				while(d--)
				{
					a+=y;
					cout<<a<<" ";
				}
				break;
			}
			p*=2;
		}
		if(i==46)
			cout<<"-1";
		cout<<"\n";

	}



	return 0;
}