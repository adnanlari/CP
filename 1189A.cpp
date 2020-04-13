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
	string s;
	cin>>s;
	ll a=0,b=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
			a++;
		else
			b++;
	}
	if(a!=b)
		cout<<"1\n"<<s<<"\n";
	else
		cout<<"2\n"<<s[0]<<" "<<s.substr(1)<<"\n";



	return 0;
}