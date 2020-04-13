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

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,m,ans=0;
	cin>>n>>m;
	while(n!=m)
	{
		if(n>m)
			m+=1;
		else
		{
			if(m&1)
				m++;
			else
				m/=2;
		}
		ans++;
	}

	
	cout<<ans<<"\n";



	return 0;
}	