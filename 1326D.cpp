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
		string s;
		cin>>s;
		string ans="";
		int l=s.length(),i,j,k=0;
		for(i=0;i<(l/2);i++)
		{
			if(s[i]!=s[l-i-1])
				break;
			ans+=s[i];
		}
		string x=s.substr(i,l-2*(i));
		string y=x;
		reverse(x.begin(), x.end());
		string z=y+"*"+x;
		string d=z.substr(0,1),c=z.substr(0,1);
		string a=d,b;
		if(a=="*")
			a="";
		int n=z.length();
		for(j=1;z[j]!='*';j++)
		{
			d+=z[j];
			c=z[n-j-1]+c;
			if(d==c)
			{
				k=j;
				a=d;
			}
		}
		//
		//string a=z.substr(0,k+1);
		//cout<<z<<" "<<a<<" ";
		z=x+"*"+y;
		d=c=z.substr(0,1);
		b=d;
		if(b=="*")
			b="";
		k=0;
		for(j=1;z[j]!='*';j++)
		{
			d+=z[j];
			c=z[n-j-1]+c;
			if(d==c)
			{
				k=j;
				b=d;
			}
		}
		//cout<<z<<" "<<b<<"\n";
		z=ans;

		reverse(z.begin(), z.end());
		if(a.length()<b.length())
			ans+=b+z;
		else
			ans+=a+z;
		cout<<ans<<"\n";

	}



	return 0;
}