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
    
	ll n,c=0;
	cin>>n;
	string s;
	cin>>s;
	s+=s[n-1];
	map <pair<char,char>,char> M;
	M[{'R','R'}]='G';
	M[{'G','G'}]='B';
	M[{'B','B'}]='R';
	M[{'R','B'}]=M[{'B','R'}]='G';
	M[{'R','G'}]=M[{'G','R'}]='B';
	M[{'G','B'}]=M[{'B','G'}]='R';
	for(ll i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		{
			c++;
			s[i]=M[{s[i-1],s[i+1]}];
		}

	}
	cout<<c<<"\n"<<s.substr(0,n)<<"\n";




	return 0;
}