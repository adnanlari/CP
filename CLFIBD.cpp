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
		string s;
		cin>>s;
		ll flag=1,i;
		ll A[27]={0};
		for(i=0;s[i]!='\0';i++)
			A[((int)s[i])-96]++;
		sort(A,A+27);
		for(i=1;i<=26;i++)
		{
			if(A[i])
				break;
		}
		
		for(ll j=i;j<=24;j++)
		{
			if((A[j]+A[j+1])!=A[j+2])
			{
				flag=0;break;
			}
		}
		if(flag)
			cout<<"Dynamic\n";
		else
			cout<<"Not\n";
	}



	return 0;
}