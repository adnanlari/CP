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
    string s,t;
    cin>>s>>t;
    int f=0;
    if(s.length()==t.length())
    {
    	for(ll i=0;s[i]!='\0';i++ )
    	{
    		if((s[i]=='a' || s[i]=='e'|| s[i]=='o' || s[i]=='u' || s[i]=='i') && (t[i]!='a' && t[i]!='e'&& t[i]!='o' && t[i]!='u' && t[i]!='i'))
    		{
    			f=1;
    		}

    		else if((s[i]!='a' && s[i]!='e'&& s[i]!='o' && s[i]!='u' && s[i]!='i') && (t[i]=='a' || t[i]=='e'|| t[i]=='o' || t[i]=='u' || t[i]=='i'))
    		{
    			f=1;
    		}
     		//cout<<f;
    	}
    }
    else
    	f=1;
    if(f)
    	cout<<"No\n";
    else
    	cout<<"Yes\n";
	



	return 0;
}