/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
//#define IOS ios_base::sync_with_studio(false); cin.tie(NULL);

int main()
{
	//IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ll n,k,i,j;
	cin>>n>>k;
	ll r=2*n;
	ll g=5*n;
	ll b=8*n;
	ll ans=(r/k)+(b/k)+(g/k);
	if(r%k!=0)
		ans++;
	if(b%k!=0)
		ans++;
	if(g%k!=0)
		ans++;
	cout<<ans<<"\n";

	return 0;
}