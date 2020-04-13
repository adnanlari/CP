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
    
    string s;
    cin>>s;
    ll ans=0;
    stack <char> A;
    A.push(s[0]);
    for(ll i=1;i<s.length();i++)
    {
    	if( !A.empty() && s[i]==A.top())
    	{
    		ans++;
    		A.pop();
    	}
    	else
    		A.push(s[i]);
    }
    //cout<<ans<<"\n";
    if(ans%2)
    	cout<<"Yes\n";
    else
    	cout<<"No\n";

	



	return 0;
}