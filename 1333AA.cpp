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
		ll m,n;
		cin>>m>>n;
		char a[m][n];
		char x,y;
		for(ll i=0;i<m;i++)
		{
			if(i%2)
			{
				x='B';
				y='W';
			}
			else
			{
				x='W';
				y='B';
			}
			for(ll j=0;j<n;j++)
			{
				if(j%2)
					a[i][j]=x;
				else
					a[i][j]=y;
			}
		}
		if(m*n%2==0)
		{
			a[0][1]='B';
		}
		for(ll i=0;i<m;i++)
		{
			for(ll j=0;j<n;j++)
				cout<<a[i][j];
			cout<<"\n";
		}
	}



	return 0;
}	