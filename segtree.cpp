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


void build(int tree[],int node,int A[],int start,int end)
{
	if(start==end)
		tree[node]=A[start];
	else
	{
		int mid=(start+end)/2;
		build(tree,2*node,A,start,mid);
		build(tree,2*node+1,A,mid+1,end);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}

void update(int tree[],int node,int A[],int start,int end,int ind,int val)
{
	if(start==end)
	{
		A[ind]=val;
		tree[node]=val;
	}
	else
	{
		int mid=(start+end)/2;
		if(start<=ind && mid>=ind)
			update(tree,2*node,A,start,mid,ind,val);
		else
			update(tree,2*node+1,A,mid+1,end,ind,val);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}

int query(int tree[],int node,int A[],int l,int r,int start,int end)
{
	if(r<start || l>end)
		return INT_MAX;
	if(l<=start && r>=end)
		return tree[node];
	int mid=(start+end)/2;
	int p1=query(tree,2*node,A,l,r,start,mid);
	int p2=query(tree,2*node+1,A,l,r,mid+1,end);
	return min(p1,p2);
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
    int A[n+1],tree[3*n];
    for(int i=1;i<=n;i++)
    	cin>>A[i];
    build(tree,1,A,1,n);
    while(q--)
    {
    	char c;
    	int x,y;
    	cin>>c>>x>>y;
    	if(c=='u')
    		update(tree,1,A,1,n,x,y);
    	else if(c=='q')
    		cout<<query(tree,1,A,x,y,1,n)<<"\n";
    }

	



	return 0;
}