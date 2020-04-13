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

vector <int> a;

bool check()
{
	for(ll i=0;i<a.size();i++)
	{
		if(a[i]==0)
			return true;
	}
	return false;
}
void add()
{
	int i=0;
	while(a[i]!=0)
	{
		a[i]=0;
		i++;
	}
	a[i]=1;
}
void show()
{
	for(ll i=a.size()-1;i>=0;i--)
		cout<<a[i];
	cout<<"\n";
}

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
    
	ll n,count=0;
	cin>>n;
	bool q=true;
	vector <int> ans;

	
	while(n!=0)
	{
		a.pb(n%2);
		n/=2;	}



	q=check();
	while(q)
	{
		ll i;
		for(i=a.size()-1;i>=0;i--)
		{
			if(a[i]==0)
				break;
		}
		for(int j=i;j>=0;j--)
		{
			if(a[j])
				a[j]=0;
			else
				a[j]=1;
		}
		count++;
		ans.pb(i+1);
		//show();
		q=check();
		if(q)
		{
			add();
			count++;
		}
		q=check();
		//show();

	}
	cout<<count<<"\n";
	if(count!=0)
	{
		for(ll u=0;u<ans.size();u++)
			cout<<ans[u]<<" ";
		cout<<"\n";
	}




	return 0;
}