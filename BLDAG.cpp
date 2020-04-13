/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,m,x,y,c=0,f1=1,f2=0;
	cin>>n>>m;
	ll a[n+1]={0};
	vector <ll> b[n+1];
	vector <pair<ll,ll>> ans;
	deque <ll> v;
	
	for(ll i=1;i<=m;i++)
	{
		
		cin>>x>>y;
		a[x]++;
		b[y].push_back(x);

	}
	for(ll i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			if(f1==0)
			{
				v.push_back(i);
				f1=1;
			}
			else if(f1==1)
			{
				v.push_front(i);
				f1=0;
			}
		}
	}
	
	while(!(v.empty()))
	{
		y=0;
		 x=v.front();
		// cout<<x<<endl;
		 v.pop_front();
		// cout<<"0 "<<x<<endl;
		if(!(v.empty()))
		{
			
			 y=v.front();
			// cout<<y<<endl;
			 v.pop_front();
			ans.push_back(make_pair(x,y));
		//	cout<<"1 "<<y<<endl;
			c++;
		}
		else
		{
			ans.push_back(make_pair(x,0));
			c++;
		}
		for(ll j=0;j<b[x].size();j++)
		{
		//	cout<<b[x][j];
			a[b[x][j]]--;
			if(a[b[x][j]]==0)
			{
				

			if(f1==0)
			{
				v.push_back(b[x][j]);
				f1=1;
			}
			else if(f1==1)
			{
				v.push_front(b[x][j]);
				f1=0;
			}
			}
		}
		for(ll j=0;j<b[y].size();j++)
		{
		//	cout<<b[y][j];
			a[b[y][j]]--;
			if(a[b[y][j]]==0)
			{
				

			if(f1==0)
			{
				v.push_back(b[y][j]);
				f1=1;
			}
			else if(f1==1)
			{
				v.push_front(b[y][j]);
				f1=0;
			}

			}
		}
		

	}
	cout<<c<<endl;
	for(ll k=0;k<c;k++)
	{
		if(ans[k].second == 0)
			cout<<"1 "<<ans[k].first<<endl;
		else
			cout<<"2 "<<ans[k].first<<" "<<ans[k].second<<endl;
	}




	return 0;
}