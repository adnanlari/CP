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

int count_bit(int x)
{
	int c=0;
	while(x!=0)
	{
		c+=(x&1);
		x/=2;
	}
	return c;
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
    ll A[31];
    A[0]=1;
    for(ll i=1;i<=30;i++)
    	A[i]=A[i-1]*2;
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,a,b;
		cin>>n>>a>>b;
		ll ca=count_bit(a),cb=count_bit(b);
		//cout<<ca<<" "<<cb<<" ";
		ll ans=0,r=0;
		if(ca+cb <= n)
			ans=ca+cb;
		else
			ans=n+n-ca-cb;
		for(ll i=1;i<=ans;i++)
			r+=A[n-i];
		cout<<r<<"\n";

	}



	return 0;
}