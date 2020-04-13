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
		ll m,n,q,x,y,ans=0;
		cin>>m>>n>>q;
		ll a[m+1]={0},b[n+1]={0};
		while(q--)
		{
			cin>>x>>y;
			a[x]++;
			b[y]++;
		}
		x=0;y=0;
		for(int i=1;i<=m;i++)
		{
			if(a[i]%2)
				x++;
			else
				y++;
		}
		for(int i=1;i<=n;i++)
		{
			if(b[i]%2==0)
				ans+=x;
			else if(b[i]%2)
				ans+=y;
		}
		cout<<ans<<"\n";

	}



	return 0;
}