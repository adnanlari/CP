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
    ll x,y,z;
    cin>>x>>y>>z;
    ll ans=(x/z)+(y/z);
    ll q=0;
    ll a=x%z,b=y%z;
    if(a+b >= z)
    {
    	q=z - max(a,b);
    	ans++;
   }
   cout<<ans<<" "<<q<<"\n";
	



	return 0;
}