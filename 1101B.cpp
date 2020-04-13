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

    
	string s;
	cin>>s;
	ll flag=0,a,b,c,d,e,cnt=0;
	for( a=0;s[a]!='\0';a++)
	{
		if(s[a]=='[')
			break;
	}
	if(s[a]!='\0')
	{
		for(b=s.length()-1;b>=0;b--)
		{
			if(s[b]==']')
				break;
		}
		if(b!=-1 && b>a)
		{
			for(c=a+1;c<b;c++)
			{
				if(s[c]==':')
					break;
			}
			for(d=b-1;d>a;d--)
			{
				if(s[d]==':')
					break;
			}
			if(c<d)
			{
				for(e=c+1;e<d;e++)
				{
					if(s[e]=='|')
						cnt++;
				}
				cout<<cnt+4<<"\n";



			}
			else
				cout<<"-1\n";

		}
		else
			cout<<"-1\n";
	}
	else
		cout<<"-1\n";




	return 0;
}