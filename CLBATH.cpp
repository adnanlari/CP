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
    
	ll n;
	cin>>n;
	while(n--)
	{
		ll v1,t1,v2,t2,v3,t3;
		cin>>v1>>t1>>v2>>t2>>v3>>t3;
		float vx=((float)(v3*t3-v3*t2))/((float)(t1-t2));
		float vy=((float)(v3*t3-v3*t1))/((float)(t2-t1));
		if(vx>=0&&vx<=v1&&vy>=0&&vy<=v2)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}



	return 0;
}