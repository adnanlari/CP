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
		ll n,i,j,l=1,x,y;
		cin>>n;
		ll A[n+1][n+1];
		
		for(i=1;i<=n;i++)
		{
			x=1;y=i;
			for(j=1;j<=i;j++)
			{
				A[x][y]=l;
				l++;
				x++;
				y--;

			}

		}
		for(i=2;i<=n;i++)
		{
			x=i;y=n;
			while(x<=n)
			{
				A[x][y]=l;
				l++;
				x++;
				y--;
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				cout<<A[i][j]<<" ";
			cout<<"\n";
		}
	}



	return 0;
}