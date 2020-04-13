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

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,f=0,k=1;
	cin>>n;
	string A[2*n],q[2];
	string s1,s2;
	ll L[n][3];
	char ans1[2*n],ans2[2*n];
	for(ll i=1;i<n;i++)
		{L[i][1]=L[i][2]=0;}
	
	for(ll i=1;i<=2*n-2;i++)
	{
		cin>>A[i];
		ll l=A[i].length();
		ans1[i]='0';
		ans2[i]='0';

		if(l==n-1)
		{
			if(f==0)
			{	q[0]=A[i]; f=1;}
		else
			q[1]=A[i];

		}
		if(L[l][1]==0)
			L[l][1]=i;
		else
			L[l][2]=i;

	}
		s1=q[0]+q[1].substr(n-2);
		s2=q[1]+q[0].substr(n-2);
	for(ll i=1;i<n;i++)
	{
		if(A[L[i][1]]==s1.substr(0,i) && A[L[i][2]]==s1.substr(n-i,i))
		{
			ans1[L[i][1]]='P';
			ans1[L[i][2]]='S';

		}
		else if(A[L[i][2]] == s1.substr(0,i) && A[L[i][1]]==s1.substr(n-i,i))
		{
			ans1[L[i][1]]='S';
			ans1[L[i][2]]='P';

		}
	}
	for(ll i=1;i<n;i++)
	{
		if(A[L[i][1]]==s2.substr(0,i) &&  A[L[i][2]]==s2.substr(n-i,i))
		{
			ans2[L[i][1]]='P';
			ans2[L[i][2]]='S';

		}
		else if(A[L[i][2]] == s2.substr(0,i) && A[L[i][1]]==s2.substr(n-i,i))
		{
			ans2[L[i][1]]='S';
			ans2[L[i][2]]='P';

		}
	}
	for(ll i=1;i<2*n-1;i++)
	{
		if(ans1[i]=='0')
		{
			k=2;
			break;
		}
		if(ans2[i]=='0')
		{
			k=1;
			break;
		}
	}
	
	if(k==1)
	{
		for(ll i=1;i<2*n-1;i++)
			cout<<ans1[i];
	}
	if(k==2)
	{
		for(ll i=1;i<2*n-1;i++)
			cout<<ans2[i];
	}
	cout<<"\n";



	return 0;
}	