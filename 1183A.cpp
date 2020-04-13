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

bool check(int a)
{
	int x=0;
	while(a>0)
	{
		x+=(a%10);
		a/=10;
	}
	if(!(x%4))
		return true;
	return false;
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
    
	ll a;
	cin>>a;
	for(int i=0;;i++)
	{
		if(check(a+i))
		{
			cout<<a+i<<"\n";
			break;
		}
	}



	return 0;
}