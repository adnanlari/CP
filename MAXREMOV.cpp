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
		ll n,k,ck=0,ck1=0;
		cin>>n>>k;
		ll A[100002]={0},Ak[100002]={0},X[n][2],Ak1[100002]={0};
		for(ll i=0;i<n;i++)
		{
			cin>>X[i][0]>>X[i][1];
			A[X[i][0]]++;
			A[X[i][1]+1]--;

		}
		for(ll i=1;i<=100001;i++)
		{
			A[i]+=A[i-1];
			if(A[i]==k)
				ck++;
			if(A[i]==(k+1))
				ck1++;
			Ak[i]=ck;
			Ak1[i]=ck1;
		}
		ll ans=INT_MIN,ans1=ck;
		for(ll i=0;i<n;i++)
		{	
			ck=Ak[X[i][1]]-Ak[X[i][0]-1];
			ck1=Ak1[X[i][1]]-Ak1[X[i][0]-1];
			ans=max(ans,ans1-ck+ck1);
			//cout<<ans1-ck+ck1<<"\n";
		}
		cout<<ans<<"\n";
	}



	return 0;
}