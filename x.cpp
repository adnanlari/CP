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
    
	ll a,b;
	cin>>a>>b;
	string x[a];
	string y;
	map <string,ll> m;
	for(int i=0;i<a;i++)
	{
		cin>>x[i];
		m[x[i]]=i+1;
	}
	cin>>y;
	vector <string> z;
	for(int i=0;i<y.length();i+=b)
		z.push_back(y.substr(i,b));
	set <ll> s;
	for(int i=0;i<=z.size()-a;i++)
	{
		for(int j=0;j<a;j++)
		{
			if(m[z[i+j]]>0)
				s.insert(m[z[i+j]]);
		}
		if(s.size()==a)
		{
			cout<<b*i<<"\n";
			return 0;
		}
		s.clear();
	}
	cout<<"-1"<<"\n";
	




	return 0;
}