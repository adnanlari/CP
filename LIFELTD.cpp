/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair



int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll t;
	cin>>t;
	while(t--)
	{
		char A[4][4];
		ll i,j;
		for(i=1;i<=3;i++)
		{
			for(j=1;j<=3;j++)
				cin>>A[i][j];
		}
		for(i=1;i<=2;i++)
		{
			for(j=1;j<=2;j++)
			{
				if(A[i][j]=='l' && A[i+1][j]=='l' && A[i+1][j+1]=='l')
					break;
			}
			if(j<3)
				break;

		}
		if(i<3)
			cout<<"yes\n";
		else
			cout<<"no\n";

	}



	return 0;
}