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

bool check(string s)
{
	int n=s.length();
	for(int i=0;s[i]!=0;i++)
	{
		if(s[i]!=s[n-i-1])
			return false;
	}
	return true;
}

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
    
	string s;
	cin>>s;
	int l=s.length();
	if(check(s) && check(s.substr(0,l/2)) && check(s.substr(l/2+1)))
		cout<<"Yes\n";
	else
		cout<<"No\n";


	return 0;
}