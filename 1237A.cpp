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
    
	ll n,sum=0;
	cin>>n;
	ll a[n],ans[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ans[i]=a[i]/2;
		sum+=ans[i];
	}
	for(int i=0;i<n;i++)
	{
		if((a[i]+336)%2)
		{
			if(sum<0 && a[i]>0)
			{
				ans[i]+=1;
				sum+=1;
			}
			else if(sum>0 && a[i]<=0)
			{
				ans[i]-=1;
				sum-=1;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<ans[i]<<"\n";



	return 0;
}	