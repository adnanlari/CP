/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

vector <ll> X[123];
ll visited[123];

char DFS(char a,char x)
{
	if(a<x)
		x=a;
	visited[a]=1;

		for(ll i=0;i<X[a].size();i++)
		{
			if(!visited[X[a][i]])
				x=DFS(X[a][i],x);
		}

	return x;
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

    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		map <char,char> M;

		for(ll i=97;i<=122;i++)
		{
			X[i].clear();
			visited[i]=0;
		}


		for(ll i=0;i<m;i++)
		{
			char a,b;
			cin>>a>>b;
			X[a].pb(b);
		}
		for(ll i=0;i<n;i++)
		{
			if(M[s[i]]=='\0')
			{
				M[s[i]]=DFS(s[i],s[i]);
				for(ll i=97;i<=122;i++)
				{
					visited[i]=0;
				
				}
			}
			cout<<M[s[i]];
			
		}
		cout<<"\n";
		

	}



	return 0;
}