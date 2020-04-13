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
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string a,x,y;
		cin>>a;
		x.resize(n);
		y.resize(n);
		int flag=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='0')
			{
				x[i]=y[i]='0';
			}
			if(a[i]=='1')
			{
				if(flag==0)
				{
					x[i]='1';
					y[i]='0';
					flag=1;
				}
				else
				{
					x[i]='0';
					y[i]='1';
				}
			}
			if(a[i]=='2')
			{
				if(flag==0)
				{
					x[i]=y[i]='1';
				}
				else
				{
					x[i]='0';
					y[i]='2';
				}
			}
		}
		cout<<x<<"\n"<<y<<"\n";
	}



	return 0;
}