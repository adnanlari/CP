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
		int n,flag=0;
		cin>>n;
		ll a[n],table1[n+1]={0},table2[n+1]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			table1[a[i]]=i;
		}
		for(int i=n-1;i>=0;i--)
			table2[a[i]]=i;
		for(int i=1;i<=n;i++)
		{
			if(table1[i]-table2[i] >= 2)
				flag=1;
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}



	return 0;
}