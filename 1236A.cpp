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
	while (t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll sum=0;
		ll x=c/2;
		x=min(b,x);
		b-=x;
		c-=x*2;
		sum+=3*x;
		x=b/2;
		x=min(a,x);
		a-=x;
		b-=2*x;
		sum+=3*x;

		cout<<sum<<endl;
	}



	return 0;
}