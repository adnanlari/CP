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

    
	string s,x;
	cin>>s;
	ll l=s.length();
	x=s;
	ll index=(l-1)/2;
	//cout<<index<<" "<<l<<"\n";
	for(ll i=0;i<l;i++)
	{
		if(i%2==0)
			index-=i;
		else
			index+=i;
		cout<<s[index];

	}
	cout<<"\n";



	return 0;
}