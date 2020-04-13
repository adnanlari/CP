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
		ll m,n,bi=-1,bj=-1,er=-1,ans=0;
		cin>>m>>n;
		char a[m][n];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='P')
					er=i;
			}
		}
		for(int i=m-1;i>=0;i--)
		{
			for(int j=n-1;j>=0;j--)
			{
				if(a[i][j]=='P')
				{
					bi=i;
					bj=j;
				}
			}
		}
		if(bi==-1 && bj==-1)
		{
			cout<<"0\n";
			continue;
		}
		for(ll i=bi;i<=er;i++)
		{
			if(i%2==0)
			{
				ll lp=bj;
				for(ll j=bj;j<n;j++)
				{
					if(a[i][j]=='P')
						lp=j;
				}
				ans+=lp-bj;
				bj=lp;
				//cout<<"a "<<ans<<"\n";
				if(i!=er)
				{
					ll nj;
					for(nj=n-1;nj>=0;nj--)
					{
						if(a[i+1][nj]=='P')
							break;
					}
					if(nj>bj)
					{
						ans+=nj-bj;
						bj=nj;
					}
					ans+=1;
					//cout<<"b "<<ans<<"\n";
				}
			}
			else
			{
				ll lp=bj;
				for(ll j=bj;j>=0;j--)
				{
					if(a[i][j]=='P')
						lp=j;
				}
				ans+=bj-lp;
				bj=lp;
				//cout<<"c "<<ans<<"\n";
				if(i!=er)
				{
					ll nj;
					for(nj=0;nj<n;nj++)
					{
						if(a[i+1][nj]=='P')
							break;
					}
					if(nj<bj)
					{
						ans+=bj-nj;
						bj=nj;
					}
					ans+=1;
					//cout<<"d "<<ans<<"\n";
				}
			}
		}
		cout<<ans<<"\n";


	}



	return 0;
}