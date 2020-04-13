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
#define pb push_back
#define mp make_pair
bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
{ 
    return (a.second < b.second); 
} 

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll A[1001][1001]={0};
	vector <pair<ll,ll>> x,an;
	ll ans=0;
	for(ll i=1;i<=3;i++)
	{
		ll a,b;
		cin>>a>>b;
		x.pb(mp(a,b));

	}
	sort(x.begin(),x.end());

	
		ll a=x[0].first,b=x[0].second;
		ll a1=x[1].first,b1=x[1].second;
		for(ll i=a;i<=a1;i++)
		{
			A[i][b]=1;
			ans++;
			an.pb(mp(i,b));

		}
		if(b<=b1)
		{
			for(ll i=b+1;i<=b1;i++)
			{
				A[a1][i]=1;
				ans++;
				an.pb(mp(a1,i));
			}
		}
		else
		{
			for(ll i=b1;i<b;i++)
			{
				A[a1][i]=1;
				ans++;
				an.pb(mp(a1,i));
			}

		}
		ll a2=x[2].first,b2=x[2].second;
		if(b1<=b2)
		{
			for(ll i=b1;i<=b2;i++)
			{
				if(!A[a1][i])
				{
					A[a1][i]=1;
					ans++;
					an.pb(mp(a1,i));
				}
			}
		}
		else
		{
			for(ll i=b2;i<=b1;i++)
			{
				if(!A[a1][i])
				{
					A[a1][i]=1;
					ans++;
					an.pb(mp(a1,i));
				}
			}
		}
		for(ll i=a1+1;i<=a2;i++)
		{
			A[i][b2]=1;
			ans++;
			an.pb(mp(i,b2));
		}
		cout<<ans<<"\n";
		for(ll i=0;i<ans;i++)
			cout<<an[i].first<<" "<<an[i].second<<"\n";



	return 0;
}	