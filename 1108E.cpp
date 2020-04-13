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
    
	ll n,m;
	cin>>n>>m;
	ll A[n+2]={0},x=INT_MIN,y=INT_MAX,xi,yi;
	for(ll i=1;i<=n;i++)
	{
		cin>>A[i];
		if(A[i]>x)
		{
			x=A[i];
			xi=i;
		}
		if(A[i]<=y)
		{
			y=A[i];
			yi=i;
		}
	}
	vector <ll> X;
	ll c=0,ans=0;
	ll B[n+2]={0};
	//cout<<xi<<" "<<yi<<"\n";
	for(ll i=1;i<=m;i++)
	{
		ll a,b;
		cin>>a>>b;
		if(yi>=a && yi<=b)
		{
			c++;
			--B[a];
			++B[b+1];
			X.pb(i);
		}
	}
	for(ll i=1;i<=n;i++)
	{
		B[i]+=B[i-1];
		A[i]+=B[i];
	}
	x=INT_MIN,y=INT_MAX,xi,yi;
	for(ll i=1;i<=n;i++)
	{
		if(A[i]>x)
		{
			x=A[i];
			xi=i;
		}
		if(A[i]<=y)
		{
			y=A[i];
			yi=i;
		}
	}
	cout<<x-y<<"\n"<<c<<"\n";
	for(ll i=0;i<X.size();i++)
		cout<<X[i]<<" ";
	/*if(X.size()==0)
		cout<<"0";*/
	cout<<"\n";



	return 0;
}	