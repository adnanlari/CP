/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

ll power(ll n,ll a)
{
	if(n==0)
		return 1;
	if(n%2==0)
		return power(n/2,a)*power(n/2,a);
	else
		return power(n/2,a)*power(n/2,a)*a;

}

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,m,ans;
	cin>>n>>m;
	if(n>=27)
		ans=m;
	else
		ans=m%(power(n,2));
	cout<<ans<<"\n";



	return 0;
}