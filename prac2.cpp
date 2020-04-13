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
    
	ll n,a,b,i;
	cin>>n>>a>>b;
	ll x=min(a,b);
	ll y=max(a,b);
	for(i=x;i>=1;i--)
	{
		a=x/i;
		if((n-a)*i <= y)
			break;
	}
	cout<<i<<"\n";




	return 0;
}