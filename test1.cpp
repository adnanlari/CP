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

ll reverse(ll t)
{
    ll x=0;
    while(t!=0)
    {
        x=x*10+(t%10);
        t/=10;
    }
    return x;
}


int main()
{
    
    ll t=0,i=1000,x;
    while(i--)
    {
        x=reverse(t);
        if(x%7 == 0)
            cout<<t<<" "<<x<<"\n";
        t+=7;
    }
    return 0;


    
}