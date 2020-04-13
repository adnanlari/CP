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
    
	ll h1,h2,m1,m2;
	char c;
	cin>>h1>>c>>m1;
	cin>>h2>>c>>m2;
	if(m1>m2)
	{
		h2--;
		m2+=60;
	}
	ll d=(h2-h1)*60+(m2-m1);
	d/=2;
	ll h=d/60;
	h1+=h;
	m1+=(d%60);
	if(m1>=60)
	{
		m1%=60;
		h1++;
	}
	if(h1<10)
		cout<<"0";
		cout<<h1;
	cout<<":";
	if(m1<10)
		cout<<"0";
		cout<<m1<<"\n";




	return 0;
}