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
    
	ll n,flag=0;
	cin>>n;
	string s;
	cin>>s;
	ll A[11];
	for(ll i=1;i<=10;i++)
		cin>>A[i];
	for(ll i=0;s[i]!='\0';i++)
	{
		if(s[i]-48 > A[s[i]-48])
		{
			if(flag)
				break;
		}
		if(s[i]-48 == A[s[i]-48]  && !flag)
			continue;
		if(s[i]-48 <= A[s[i]-48])
		{
			s[i]=(char)A[s[i]-48]+48;
			flag=1;
		}
	}
	cout<<s<<"\n";



	return 0;
}