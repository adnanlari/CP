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
    ll n,q,m=INT_MIN,pm=-1;
    cin>>n>>q;
    deque <ll> a;
    for(ll i=0;i<n;i++)
    {
    	ll x;
    	cin>>x;
    	if(x>m)
    	{
    		m=x;
    		pm=i;
    	}
    	a.pb(x);
    }
    // for(ll i=0;i<n;i++)
    // 	cout<<a.at(i)<<" ";
    vector <pair<ll,ll>> z;
    for(ll i=0;i<pm;i++)
    {
    	ll x,y;
    	x=a.front();
    	a.pop_front();
    	y=a.front();
    	a.pop_front();
    	a.pb(min(x,y));
    	a.push_front(max(x,y));
    	z.pb(mp(x,y));
    }
    while(q--)
    {
    	ll x;
    	cin>>x;
    	if(x<=pm)
    		cout<<z[x-1].first<<" "<<z[x-1].second<<"\n";
    	else
    	{
    		cout<<a.front()<<" ";
    		ll y=x-pm;
    		y=y%(n-1);
    		if(y==0)
    			y=n-1;
    		cout<<a.at(y)<<"\n";
    	}

    }

	



	return 0;
}