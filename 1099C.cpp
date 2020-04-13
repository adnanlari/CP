/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	string s,x,y;
	cin>>s;
	vector <ll> A,B;
	ll k;
	cin>>k;
	for(ll i=0;s[i]!='\0';i++)
	{
		x=s.substr(i,1);
		if(x=="?")
			A.pb(i-1);
		else if(x=="*")
			B.pb(i-1);
		else
			y+=x;


	}
	if(y.length() < k)
	{
		if(B.size()==0)
			cout<<"Impossible\n";
		else
		{
			for(ll i=0;i<=B[0];i++)
			{
				if(s[i]!='?' && s[i]!='*')
					cout<<s[i];
			}
			for(ll i=1;i<=(k-y.length());i++)
				cout<<s[B[0]];
			for(ll i=B[0]+1;s[i]!='\0';i++)
			{
				if(s[i]!='?' && s[i]!='*')
					cout<<s[i];

			}
			cout<<"\n";
		}
	}
	else if(y.length() > k)
	{
		if(A.size()+B.size() < y.length()-k)
			cout<<"Impossible\n";
		else
		{
			ll b=y.length()-k,c=0,f=0;
			s+=" ";
			for(ll i=0;s[i]!=0;i++)
			{
				if((s[i+1]=='?' || s[i+1]=='*') && c>=b)
				{
					cout<<s[i];
				}
				else if(s[i]=='?' || s[i]=='*')
					c++;
				else if(s[i+1]!='?' && s[i+1]!='*')
					cout<<s[i];


			}
			cout<<"\n";
		}
	}
	else if(y.length()==k)
		cout<<y<<"\n";



	return 0;
}