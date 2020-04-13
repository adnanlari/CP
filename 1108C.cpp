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
    
	ll n,m=INT_MAX,in;
	cin>>n;
	string s;
	cin>>s;
	string A[]={"RGB","RBG","BRG","BGR","GBR","GRB"};
	ll X[6]={0};
	for(ll i=0;i<6;i++)
	{
		for(ll j=0;j<n;j++)
		{
			if(s[j]!=A[i][j%3])
				X[i]++;
		}
		if(m>X[i])
		{
			m=X[i];
			in=i;
		}
	}
	cout<<m<<"\n";
	for(ll i=0;i<n;i++)
		cout<<A[in][i%3];
	cout<<"\n";



	return 0;
}