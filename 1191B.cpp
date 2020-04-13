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
    
	string a,b,c;
	cin>>a>>b>>c;
	int ans=2;
	// if(a==b)
	// {
	// 	if(b==c)
	// 	{}
	// 	else
	// 	{
	// 		ans=1;
	// 	}
	// }
	// else if(b==c)
	// {
	// 	if(a==b){}
	// 	else
	// 	{
	// 		ans=1;
	// 	}
	// }
	// else
	// {
	// 	int x[3];
	// 	x[0]=(int)a[0],x[1]=(int)b[0],x[3]=(int)c[0];
	// 	sort(x,x+3);
	// 	if(x[1]-x[0]==1 && s[1]==s[0])
	// 	{
	// 		if(x[2]-x[1]==1 && s[])
	// 		{}
	// 		else
	// 			ans=1;
	// 	}
	// }

	int x[3][10];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<10;j++)
			x[i][j]=0;
	}
	int q,w,e;
	if(a[1]=='m') q=0;
	else if(a[1]=='p') q=1;
	else if(a[1]=='s') q=2;
	if(b[1]=='m') w=0;
	else if(b[1]=='p') w=1;
	else if(b[1]=='s') w=2;
	if(c[1]=='m') e=0;
	else if(c[1]=='p') e=1;
	else if(c[1]=='s') e=2;
	x[q][(int)(a[0]-48)]++;
	x[w][(int)(b[0]-48)]++;
	x[e][(int)(c[0]-48)]++;
	for(int i=0;i<3;i++)
	{
		for(int j=1;j<10;j++)
		{
			//cout<<x[i][j];
			if(x[i][j]==3)
				ans=min(ans,0);
			if(x[i][j]==2)
				ans=min(ans,1);
		}
		//cout<<"\n";
	}
		for(int i=0;i<3;i++)
		{
			for(int j=1;j<8;j++)
			{
				if(x[i][j]==1 && x[i][j+1]==1 && x[i][j+2]==1)
					ans=min(ans,0);
			}
		}
			for(int i=0;i<3;i++)
			{
				for(int j=1;j<9;j++)
				{
					if(x[i][j]>=1 && x[i][j+1]>=1)
						ans=min(ans,1);
				}
			}
		for(int i=0;i<3;i++)
		{
			for(int j=1;j<8;j++)
			{
				if(x[i][j]>=1 && x[i][j+2]>=1)
					ans=min(ans,1);
			}
		}

	cout<<ans<<"\n";

	return 0;
}