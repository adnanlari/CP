/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);
//map <ll,ll> L;

ll C(ll n)
{
	if(n==0 )
		return 0;

	//if(L[n]==0)
	//{
		ll k=C(n/2)+C(n/3)+C(n/4);
		if(k>n)
			return k;
			//L[n]=k;
		else
			return n;
			//L[n]=n;

	//}
	//return L[n];

}
int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll n;
    while(cin>>n)
    cout<<C(n)<<"\n";
    
	



	return 0;
}