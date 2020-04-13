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
    
	ll n;
	cin>>n;
	vector <pair<int,int>> a;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		a.pb(mp(x,i+1));
	}
	if(n==2 || n==3)
	{
		cout<<"1\n";
		return 0;
	}
	sort(a.begin(),a.end());
	ll diff[n];
	diff[0]=0;
	for(int i=0;i<n;i++)
	{
		diff[i]=a[i].first - a[i-1].first;
	}
	bool z=false;
	ll ans=-1,d=-1;
	if(diff[1]==diff[2] && diff[2]==diff[3])
	{
		d=diff[1];
		z=true;
	}
	else if(diff[1]+diff[2] == diff[3])
	{
		d=diff[3];
		z=true;
		// ans=1;
	}
	else if(diff[3]+diff[2] == diff[1])
	{
		d=diff[1];
		z=true;
		// ans=2;
	}
	else if(diff[1]==diff[2] && diff[3]<diff[2])
	{
		d=diff[1];
		z=true;
		// ans=3;
	}
	else if(diff[2]==diff[3] )
	{
		d=diff[2];
		z=true;
		ans=a[0].second;
	}
	if(!z)
	{
		cout<<"-1\n";
		return 0;
	}
	// cout<<d<<"\n";
	int i;
	for( i=1;i<n;i++)
	{
		if(diff[i]!=d)
		{
			if(ans==a[0].second && i==1)
				continue;
			if(ans!=-1)
			{
				ans=-1;
				break;
			}
			if(i==n-1)
				ans=a[i].second;
			else
			{
				if(diff[i]+diff[i+1] == d)
				{
					ans=a[i].second;
				 	i++;
				}
				else
					break;
			}
		}

	}
	if(ans==-1 && i==n)
		cout<<a[0].second<<"\n";
	else
	cout<<ans<<"\n";

	return 0;
}