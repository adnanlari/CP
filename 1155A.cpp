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
    
	ll n,i;
	cin>>n;
	string s;
	cin>>s;
	for(i=0;i<n-1;i++)
	{
		if(s[i]>s[i+1])
			break;
	}
	if(i==n-1)
		cout<<"NO\n";
	else
	{
		cout<<"YES\n"<<i+1<<" "<<i+2<<"\n";
	}


	return 0;
}