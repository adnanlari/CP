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
    
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n],b[n];
		vector <pair<ll,ll>> X(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			X[i].first=a[i];
			X[i].second=i;
		}
		sort(X.begin(),X.end());
		ll h=floor(n/2);
		ll count=1,flag=0;
		for(int i=1;i<n;i++)
		{
			if(X[i].first == X[i-1].first)
				count++;
			else
				count=1;
			if(count>h)
				flag=1;
		}
		if(flag)
		{
			cout<<"No\n";
			continue;
		}
		for(ll i=0;i<h;i++)
		{
			ll x=X[i].first;
			X[i].first=X[i+h].first;
			X[i+h].first=x;
		}
		for(int i=0;i<n;i++)
			b[X[i].second]=X[i].first;
		if(n%2)
		{
			ll y=X[n-1].second;
			for(int i=0;i<n;i++)
			{
				if(b[y]!=b[i] && b[y]!=a[i] && b[i]!=a[y])
				{
					ll x=b[y];
					b[y]=b[i];
					b[i]=x;
					break;
				}

			}
		}
		cout<<"Yes\n";
		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<"\n";


	}



	return 0;
}