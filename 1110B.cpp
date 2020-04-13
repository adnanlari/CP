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
    
	ll n,m,k,ans=0;
	cin>>n>>m>>k;
	ll A[n];
	for(ll i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	vector <pair<ll,ll>> X;
	for(ll i=0;i<n-1;i++)
		X.pb(mp(A[i+1]-A[i],i));
	sort(X.begin(),X.end());
	vector <ll> Y;
	
	for(ll i=X.size()-1;i>=X.size()-1-k+2;i--)
		Y.pb(X[i].second);
	ans=A[n-1]-A[0]+1;
	//cout<<ans<<"bb";
	sort(Y.begin(),Y.end());
	for(ll i=0;i<Y.size();i++)
	{
		//cout<<Y[i]<<"aa\n";
		ans-=A[Y[i]+1]-A[Y[i]]-1;
	}
	cout<<ans<<"\n";



	return 0;
}