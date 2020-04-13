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
    
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	ll l=0,r=n-1,count=0, curr;
	vector <char> ans;
	if(a[l]<=a[r])
	{
		curr=a[l];
		l+=1;
		ans.pb('L');
	}
	else
	{
		curr=a[r];
		r-=1;
		ans.pb('R');
	}
	count++;
	while(l<=r)
	{
		char c='I';
		if(a[l]>curr && a[r]>curr)
		{
			if(a[l]<a[r])
			{
				curr=a[l];
				l+=1;
				c='L';
			}
			else
			{
				curr=a[r];
				r-=1;
				c='R';
			}

		}
		else if(a[l]>curr)
		{
			curr=a[l];
			l+=1;
			c='L';
		}
		else if(a[r]>curr)
		{
			curr=a[r];
			r-=1;
			c='R';
		}
		if(c=='I')
			break;
		// else if(c=='L')
		// 	l+=1;
		// else if(c=='R')
		// 	r-=1;
		count++;
		ans.pb(c);
		//cout<<curr;

	}
	cout<<count<<"\n";
	for(ll i=0;i<count;i++)
		cout<<ans[i];
	cout<<"\n";





	return 0;
}