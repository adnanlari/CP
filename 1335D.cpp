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
		string a[9];
		char c;
		for(ll i=0;i<9;i++)
			cin>>a[i];
		a[0][1]=a[0][0];
		a[1][4]=a[1][3];
		a[2][7]=a[2][6];
		a[3][2]=a[3][0];
		a[4][5]=a[4][3];
		a[5][8]=a[5][6];
		a[6][0]=a[6][2];
		a[7][3]=a[7][5];
		a[8][6]=a[8][8];
		for(ll i=0;i<9;i++)
			cout<<a[i]<<"\n";

	}



	return 0;
}