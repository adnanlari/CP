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

    
	ll t; 
	cin>>t;
	while(t!=0)
	{
		ll n;
		cin>>n;
		ll a;
		ll min=INT_MAX,i=-1,j;
		for(j=1;j<=n;i++)
		{
			cin>>a;
			if(a<min)
			{
				min=a;
				i=j;
			}

		}
		cout<<i<<"\n";
		t-=1;
	}




	return 0;
}