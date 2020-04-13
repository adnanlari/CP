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
		ll n,m;
		cin>>n>>m;
		ll c[m+1];
		for(int i=1;i<=m;i++)
			cin>>c[i];
		ll d[n],f[n],b[n],ans[n]={0},x=0;
		for(ll i=0;i<n;i++)
			cin>>d[i]>>f[i]>>b[i];
		for(ll i=0;i<n;i++)
		{
			if(c[d[i]]>0)
			{
				c[d[i]]-=1;
				ans[i]=d[i];
				x+=f[i];
			}
		}
		// for(int i=1;i<=m;i++)
		// 	cout<<c[i]<<"\n";

		int point=1;
		while(c[point]==0 && point<=m)
			point++;
		// cout<<point<<"\n";
		for(int i=0;i<n;i++)
		{
			if(!ans[i])
			{
				ans[i]=point;
				c[point]-=1;
				x+=b[i];
				while(c[point]==0 && point<=m)
					point++;
			}
		}
		cout<<x<<"\n";
		for(int i=0;i<n;i++)
			cout<<ans[i]<<" ";
		cout<<"\n";
	}



	return 0;
}