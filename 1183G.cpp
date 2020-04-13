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
		ll n,y;
		cin>>n;
		ll a[n];
		vector <ll> x;
		vector <ll> z;

		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>y;
			if(y)
				z.pb(a[i]);
		}
		sort(a,a+n);
		x.pb(1);
		ll curr=0;
		for(int i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
				x[curr]++;
			else
			{
				x.pb(1);
				curr++;
			}
		}
		ll ans=0;
		sort(x.begin(), x.end(),greater <ll>());
		ll prev=x[0];
		ans+=prev;
		prev--;
		// for(int i=0;i<=curr;i++)
		// 	cout<<x[i]<<" ";
		// cout<<"\n";
		for(int i=1;i<=curr;i++)
		{
			if(x[i]>0 && prev>0)
			{
				if(prev>x[i])
				{
					ans+=x[i];
					prev=x[i]-1;
				}
				else
				{
					ans+=prev;
					prev-=1;
				}
			}
			else
				break;
		}
		cout<<ans<<" ";
		sort(z.begin(),z.end());
		x.clear();
		x.pb(1);
		curr=0;
		for(int i=1;i<z.size();i++)
		{
			if(z[i]==z[i-1])
				x[curr]++;
			else
			{
				x.pb(1);
				curr++;
			}
		}
		ans=0;
		sort(x.begin(), x.end(),greater <ll>());
		prev=x[0];
		ans+=prev;
		prev--;
		// for(int i=0;i<=curr;i++)
		// 	cout<<x[i]<<" ";
		// cout<<"\n";
		for(int i=1;i<=curr;i++)
		{
			if(x[i]>0 && prev>0)
			{
				if(prev>x[i])
				{
					ans+=x[i];
					prev=x[i]-1;
				}
				else
				{
					ans+=prev;
					prev-=1;
				}
			}
			else
				break;
		}
		cout<<ans<<"\n";
	}




	return 0;
}