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
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll x,y, x1,x2,y1,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		ll fx=b-a,fy=d-c;
		if(fx<=x2 && fx>=x1 &&fy<=y2 && fy>=y1)
		{
			if(x1!=x && x2!=x && y1!=y && y2!=y)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
		else
			cout<<"No\n";
	}



	return 0;
}