/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,ans=0;
		cin>>n>>m;
		if(n==1 || m==1)
		{
			if(n==1 && m==1)
			{
				cout<<"1\n1\n";
			}
			else if(m==2)
				cout<<"1\n1 1\n";
			else if(n==2)
				cout<<"1\n1\n1\n";
			else if(m>2)
			{
				cout<<"2\n";
				for(ll i=0;i<m;i++)
				{
					if(i%4==0 )
						cout<<"1 ";
					else if(i%4==1)
						cout<<"1 ";
					else if(i%4==2)
						cout<<"2 ";
					else if(i%4==3)
						cout<<"2 ";
				}
				cout<<"\n";
			}
			else if(n>2)
			{
				cout<<"2\n";
				for(ll i=0;i<n;i++)
				{
					if(i%4==0 )
						cout<<"1\n";
					else if(i%4==1)
						cout<<"1\n";
					else if(i%4==2)
						cout<<"2\n";
					else if(i%4==3)
						cout<<"2\n";
				}
			}
		}
		else if(n==2 || m==2)
		{
			if(n==2 && m==2)
			{
				cout<<"2\n1 2\n1 2\n";
			}
			else if(m>2)
			{
				cout<<"3\n";
				for(ll i=0;i<m;i++)
					cout<<((i%3)+1)<<" ";
				cout<<"\n";
				for(ll i=0;i<m;i++)
					cout<<((i%3)+1)<<" ";
				cout<<"\n";
			}
			else if(n>2)
			{
				cout<<"3\n";
				for(ll i=0;i<n;i++)
				{
					cout<<((i%3)+1)<<" "<<((i%3)+1);
					cout<<"\n";
				}
			}
		}
		else if(n>2 && m>2)
		{
			cout<<"4\n";
			for(ll i=0;i<n;i++)
			{
				ll x=i%4;
				if(x==0 || x==1)
				{
					for(ll j=0;j<m;j++)
						cout<<((j%4)+1)<<" ";
				}
				else if(x==2 || x==3)
				{
					for(ll j=0;j<m;j++)
						cout<<(((j+2)%4)+1)<<" ";
				}
				cout<<"\n";
			}

		}
		
	}



	return 0;
}