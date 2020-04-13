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

    
	map <char,ll> M;
	string s;
	cin>>s;
	ll n=0;
	for(ll i=0;s[i]!='\0';i++)
	{
		if(!M[s[i]])
		{
			n++;
			M[s[i]]=1;
		}
	}
	if(n%2)
		cout<<"IGNORE HIM!\n";
	else
		cout<<"CHAT WITH HER!\n";




	return 0;
}