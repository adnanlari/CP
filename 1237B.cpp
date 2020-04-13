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
    
	ll n,i,j;
	cin>>n;
	ll a[n],b[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	ll ans=0;
	ll c[n+1]={0};
	i=j=0;
	while(j<n)
	{
		if(a[i]==b[j])
		{
			i+=1;
			j+=1;
		}
		else
		{
			if(c[a[i]]==0)
			{
				c[b[j]]=1;
				j++;
				ans++;
			}
			else
				i++;
		}
	}
	cout<<ans<<"\n";



	return 0;
}