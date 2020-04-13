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

    
	map <string,ll> M;
	M["Tetrahedron"]=4;
	M["Cube"]=6;
	M["Octahedron"]=8;
	M["Dodecahedron"]=12;
	M["Icosahedron"]=20;

	ll n,ans=0;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		ans+=M[s];
	}
	cout<<ans<<"\n";



	return 0;
}