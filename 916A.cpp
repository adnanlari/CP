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

bool check(ll a)
{
	if(a%10==7)
		return true;
	a/=10;
	if(a%10 ==7)
		return 7;
	return false;
}

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll x,h,m,ans=0;
	cin>>x>>h>>m;
	ll h1=x/60;
	ll m1=x%60;
	while(true)
	{
		if(check(h) || check(m))
		{
			cout<<ans<<"\n";
			break;

		}
		ans+=1;
		m-=m1;
		h-=h1;
		if(m<0)
		{
			m+=60;
			h-=1;
		}
		if(h<0)
		{
			h+=24;
		}
	}




	return 0;
}