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

void build(int tree[],int node,int start,int end)
{
	if(start==end)
		tree[node]=1;
	else
	{
		int mid=(start+end)/2;
		build(tree,2*node,start,mid);
		build(tree,2*node+1,mid+1,end);
		tree[node]=(tree[2*node]+tree[2*node+1]);
	}
}

void update(int tree[],int node,int start,int end,int ind)
{
	if(start==end)
		tree[node]=0;
	else
	{
		int mid=(start+end)/2;
		if(start<=ind && mid>=ind)
			update(tree,2*node,start,mid,ind);
		else
			update(tree,2*node+1,mid+1,end,ind);
		tree[node]=(tree[2*node]+tree[2*node+1]);
	}
}

int query(int tree[],int node,int start,int end,int ind )
{
	if(tree[node]<ind)
		return -1;
	if(start==end)
		return start;
	int mid=(start+end)/2;
	if(tree[2*node]>=ind)
		query(tree,2*node,start,mid,ind);
	else
		query(tree,2*node+1,mid+1,end,ind-tree[2*node]);
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

    int n,q;
    cin>>n>>q;
    int tree[2*n+5];
    build(tree,1,1,n);
    while(q--)
    {
    	ll x,y;
    	cin>>x>>y;
    	if(x)
    		cout<<query(tree,1,1,n,y)<<"\n";
    	else
    		update(tree,1,1,n,y);
    }
    
	



	return 0;
}