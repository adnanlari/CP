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
		ll n;
		cin>>n;
		vector <pair<ll,ll>> a;
		map <ll,ll> m;
		map <ll,ll> :: iterator itr;
		a.pb(mp(0,0));
		m[0]+=1;
		ll x=0,y=0;
		for(ll i=1;i<=n;i++)
		{
			cin>>x;
			y=x^y;
			m[y]+=1;
			a.pb(mp(y,i));
		}
		ll ans=0;
		for (itr = m.begin(); itr != m.end(); ++itr)
		{
			ll q=itr->second;
		//	cout<<"jb"<<q<<"\n";
			ans-=(q*(q-1))/2;
			itr->second=(-1)*(q-1);
		}
		//cout<<ans<<"\n";
		for(int i=0;i<=n;i++)
		{
			//cout<<i<<" "<<m[a[i].first]<<"\n";
			ans+=(i*m[a[i].first]);
			m[a[i].first]+=2;
		}
		cout<<ans<<"\n";
	}



	return 0;
}