/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	cout<<"Enter the Lower and Upper bound for the Sine Curve(in radians) :\n";
	double l,u;
	cout<<"L : ";
	cin>>l;
	cout<<"U : ";
	cin>>u;


	#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    double a=3.14159/100;
	//this program is for sine curve
	
	int x=floor(l/a),y=ceil(u/a);
	for(int i=x;i<=y;i++)
	{
		int z=floor(sin(i*a)*100);
		if(z>=0)
		{
			cout<<setw(101)<<setfill(' ')<<"|";
			cout<<setw(z+1)<<setfill('*')<<"*\n";
		}
		else
		{
			z*=-1;
			cout<<setw(100-z+1)<<setfill(' ')<<"*";
			cout<<setw(z+1)<<setfill('*')<<"|\n";
		}
	}



	return 0;
}