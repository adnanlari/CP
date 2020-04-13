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
		ll k,n,a,b;
		cin>>k>>n>>a>>b;
		if(k<=n*b)
		{
			cout<<"-1\n";
			continue;
		}
		ll x=(k-1-b*n)/(a-b);
		// cout<<x<<" ";
		if(x>n)
			cout<<n<<'\n';
		else
			cout<<x<<"\n";
	}



	return 0;
}