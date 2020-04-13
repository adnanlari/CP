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
ll P[31];
vector <ll> a;
vector <ll>::iterator x,y,z;
ll n,k,A,B;
ll F(ll l,ll r)
{
		x=upper_bound(a.begin(),a.end(),r);
		y=upper_bound(a.begin(),a.end(),l-1);
	if(l==r)
	{
		if(x-y==0)
			return A;
		else
			return B*(x-y)*(r-l+1);
	}
	ll w;
	if(x-y==0)
			return A;
	else
			w= B*(x-y)*(r-l+1);
	return min(w,F(l,(r+l)/2)+F((l+r)/2+1,r));
}

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


	P[0]=1;
	for(ll i=1;i<31;i++)
		P[i]=2*P[i-1];
	cin>>n>>k>>A>>B;
	for(ll i=0;i<k;i++)
	{
		ll m;
		cin>>m;
		a.pb(m);
	}
	sort(a.begin(),a.end());

	cout<<F(1,P[n])<<"\n";



    
	


	a.clear();
	return 0;
}