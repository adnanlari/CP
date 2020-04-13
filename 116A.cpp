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
#define pb push_back
#define mp make_pair

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,a,b,ans=INT_MIN,curr=0;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		curr+=(b-a);
		ans=max(ans,curr);
		//cout<<curr<<" "<<ans<<"\n";
	}
	cout<<ans<<"\n";



	return 0;
}