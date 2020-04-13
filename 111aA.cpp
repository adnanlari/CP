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
    
	ll x,y,z,a,b,c;
	cin>>x>>y>>z>>a>>b>>c;
	ll s1=a+b+c,s2=a+b;
	if(x<=a)
	{
		a-=x;
		s1-=x;
		s2-=x;
		if(y<=s2)
		{
			s1-=y;
			s2-=y;
			if(z<=s1)
				cout<<"YES\n";
			else
				cout<<"NO\n";

		}
		else
			cout<<"NO\n";
	}
	else
		cout<<"NO\n";



	return 0;
}