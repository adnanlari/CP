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
    
    ll a[3],d;
    cin>>a[0]>>a[1]>>a[2]>>d;
    ll ans=0;
    sort(a,a+3);
    if(a[1]-a[0] < d)
    	ans+=d-a[1]+a[0];
    if(a[2]-a[1] < d)
    	ans+=d-a[2]+a[1];
	cout<<ans<<"\n";
 


	return 0;
}