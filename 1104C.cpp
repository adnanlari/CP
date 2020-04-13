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
    
	string s;
	cin>>s;
	ll A[5][5];
	for(ll i=1;i<=4;i++)
	{
		for(ll j=1;j<=4;j++)
		{
			A[i][j]=0;
		}
	}

	for(ll i=0;s[i]!='\0';i++)
	{
		for(ll a=1;a<5;a++)
		{
			if(A[a][1] && A[a][2] && A[a][3] && A[a][4])
			{
				for(ll b=1;b<5;b++)
				{
					if(A[1][b] && A[2][b] && A[3][b] && A[4][b])
					{
						A[1][b]=A[2][b]=A[3][b]=A[4][b]=0;
					}
				}

				A[a][1]=A[a][2]=A[a][3]=A[a][4]=0;
			}
		}
		for(ll a=1;a<5;a++)
		{
			if(A[1][a] && A[2][a] && A[3][a] && A[4][a])
			{
				A[1][a]=A[2][a]=A[3][a]=A[4][a]=0;
			}
		}
		if(s[i]=='0')
		{
			ll f=0;
			for(ll a=3;a<4;a++)
			{
				for(ll b=1;b<5;b++)
				{
					if(A[a][b]==0 && A[a+1][b]==0)
					{
						A[a][b]=A[a+1][b]=1;
						cout<<a<<" "<<b<<"\n";
						f=1;
						break;
					}

				}
				if(f==1)
					break;
			}
		}
		else if(s[i]=='1')
		{
			ll f=0;
			for(ll a=1;a<3;a++)
			{
				for(ll b=1;b<4;b++)
				{
					if(A[a][b]==0 && A[a][b+1]==0)
					{
						A[a][b]=A[a][b+1]=1;
						cout<<a<<" "<<b<<"\n";
						f=1;
						break;
					}
				}
				if(f==1)
					break;
			}

		}
	}



	return 0;
}