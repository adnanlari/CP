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
    
	ll n,m,ans=0;
	cin>>n>>m;
	string X[n];
	for(int i=0;i<n;i++)
		cin>>X[i];
	for(ll i=0;i<= n-3;i++)
	{
		for(ll j=0;j<m;)
		{
			ll fl=0,l2=0,l3=0,y=j+i,x=0;
			for(ll x=i;x<n;x++)
			{
				if(X[i][j]==X[x][j])
					fl++;
				else
					break;
			}
			for(ll x=i+fl;i<n;i++)
			{
				if(X[i+fl][j]==X[x][j])
					l2++;
				else
					break;
			}
			for(ll x=i+fl+fl;i<n;i++)
			{
				if(X[i+fl+fl][j]==X[x][j])
					l3++;
				else
					break;
			}
			if(fl==l2 && l2==l3)
			{
				bool flag= true;
				while(flag)
				{
					for(ll z=0;z<3*fl;z++)
					{
						if(X[i+z][j]!=X[i+z][y])
							flag=false;
					}
					if(flag)
					{
						x++;
						y++;
					}
				}


			}
			j=y;
			ans+=(x*(x+1))/2;
		}
	}
	cout<<ans<<"\n";



	return 0;
}