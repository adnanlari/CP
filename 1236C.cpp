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
    
	ll n,x=1;
	cin>>n;
	ll a[n][n];
	for(int i=0;i<n;i++)
	{
		if(i%2 == 0)
		{
			for(int j=0;j<n;j++)
				a[i][j]=x++;
		}
		else
		{
			for(int j=n-1;j>=0;j--)
				a[i][j]=x++;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<a[j][i]<<" ";
		cout<<"\n";
	}




	return 0;
}