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
    
	ll n,count=0,m=0,i;
	cin>>n;
	string s;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='8')
			count++;
	}
	if(count>(n-11)/2)
	{
		ll x=count-(n-11)/2;
		//cout<<x;
		for(i=n-1;i>=0;i--)
		{
			if(s[i]=='8')
			{
				m++;
				if(m==x)
					break;
			}
		}
		if(n-i-1 >= 10)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else
		cout<<"NO\n";



	return 0;
}