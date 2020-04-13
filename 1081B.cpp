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

    
	ll n,flag=0;
	cin>>n;
	ll A[n]={0};
	ll B[n];
	for(ll i=0;i<n;i++)
	{
		cin>>B[i];
		A[B[i]]++;
	}
	for(ll i=0;i<n;i++)
	{
		if(A[i]==n && n%2==0)
		{
			flag=2;
			break;
		}
		if(i!=(n-A[i]) && A[i]!=0)
		{
			flag=1;
			break;
		}

	}
	if(flag==1)
		cout<<"Impossible\n";
	else if(flag==0)
	{
		cout<<"Possible\n";
		for(ll i=0;i<n;i++)
			cout<<n-B[i]<<" ";
		cout<<"\n";
	}
	else
	{
		cout<<"Possible\n";
		for(ll i=0;i<n/2;i++)
			cout<<i+1<<" ";
		for(ll i=0;i<n/2;i++)
			cout<<i+1<<" ";
		cout<<"\n";
	}




	return 0;
}