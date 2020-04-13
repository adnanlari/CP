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
    map <char,int> ref;
    ref['d']=1;
    ref['f']=1;
    ref['j']=2;
    ref['k']=2;
    while(t--)
    {
    	ll n;
    	float ans=0.0,sum=0.0;
    	cin>>n;
    	map <string,float> M;
    	while(n--)
    	{
    		string s;
    		cin>>s;
    		if(M[s])
    			ans+=(M[s]/2);
    		else

    		{
    			sum=0.2;
    			for(ll i=1;s[i]!='\0';i++)
    			{
    				if(ref[s[i]]==ref[s[i-1]])
    					sum+=0.4;
    				else
    					sum+=0.2;

    				

    			}

    				M[s]=sum;
    				ans+=sum;
    		}
    	}
    	cout<<ans*10<<"\n";

    }

	




	return 0;
}	