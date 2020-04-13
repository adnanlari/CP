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
    
	ll t,a,b,c;
	bool q=true;
	cin>>t;
	while(t--)
	{
		q=true;
		cin>>a>>b>>c;
		if(c%2)
		{
			if(b<1 || a<1)
				q=false;
			else
			{
				b-=1;
				c-=1;
			}
		}
		if(b%2 )
		{
			a-
		}
	}



	return 0;
}