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
    vector <pair<tuple<ll,ll,ll>,ll>> p;
    ll x,y,z;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y>>z;
        p.pb(mp(make_tuple(x,y,z),i));
    }
    sort(p.begin(),p.end());

    for(int i=0;i<n;i+=2)
        cout<<p[i].second<<" "<<p[i+1].second<<"\n";




    return 0;
}