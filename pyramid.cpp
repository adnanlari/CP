/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* SEMESTER : Fourth
* SUBJECT : OOPS with C++
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // the output will be written in a text file named "output.txt"!
    // NOTE: here for printing '*', manipulator is used instead of using loop! 
    ll n;
    cin>>n;

    for(ll i=1;i<=n;i++) 
        //this loop is for upper part of the pyramid
    {
        if(i!=n)
    	   cout<<setw(2*(n-i+1)-2)<<setfill('*')<<"*";
    	for(ll j=1;j<=i;j++)
        {
    		if(i!=1)
                cout<<j<<" ";
            else
                cout<<j;
        }
    	for(ll k=i-1;k>=1;k--)
    	{
    		if(k!=1)
    			cout<<k<<" ";
    		else
    			cout<<k;

    	}
    	cout<<setw(2*(n-i+1)-1);
    	cout<<"\n";
    }
    for(ll i=n-1;i>=1;i--)
        //this loop is for lower part of the pyramid
    {
    	if(i!=n)
           cout<<setw(2*(n-i+1)-2)<<setfill('*')<<"*";
        for(ll j=1;j<=i;j++)
        {
            if(i!=1)
                cout<<j<<" ";
            else
                cout<<j;
        }
        for(ll k=i-1;k>=1;k--)
        {
            if(k!=1)
                cout<<k<<" ";
            else
                cout<<k;

        }
        cout<<setw(2*(n-i+1)-1);
        cout<<"\n";
    }
    
	



	return 0;
}