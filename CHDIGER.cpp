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
		string s,ans="";
		char c;
		cin>>s>>c;
		stack <char> X;
		X.push(s[0]);
		for(int i=1;s[i]!='\0';i++)
		{
			while( !X.empty() && X.top()>s[i] )
				X.pop();
			X.push(s[i]);
		}
		while( !X.empty() && X.top()>c)
			X.pop();
		while(!X.empty())
		{
			ans=X.top()+ans;
			X.pop();
		}
		int diff=s.length()-ans.length();
		for(int i=0;i<diff;i++)
			ans+=c;
		cout<<ans<<"\n";
	}

	



	return 0;
}