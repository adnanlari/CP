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
	ll D[n+1]={0},C[n+1]={0},c=0,d=0,a1,a2,b1=1,b2=1;
	cin>>a1>>a2;
	bool f=false;
	for(ll i=1;i<m;i++)
	{
		ll x,y;
		cin>>x>>y;
		if(x!=a1 && y!=a1)
		{
			C[x]+=1;
			C[y]+=1;
			c+=1;
		}
		if(x!=a2 && y!=a2)
		{
			D[x]+=1;
			D[y]+=1;
			d+=1;
		}
	}
	for(ll i=1;i<=n;i++)
	{
		if(C[i]==c)
			f=true;
		if(D[i]==d)
			f=true;
	}
	if(f)
		cout<<"YES\n";
	else
		cout<<"NO\n";




	return 0;
}