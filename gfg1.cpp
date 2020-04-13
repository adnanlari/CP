#include <bits/stdc++.h>
using namespace std;

int m=3,n=4,p=4,ne=5;

void fill(int **A,int x,int y)
{
    if(x<0 || x>=m || y<0 || y>=n)
        return;
    if(A[x][y] != p)
        return;
    A[x][y]=ne;
    fill(A,x-1,y);
    fill(A,x+1,y);
    fill(A,x,y-1);
    fill(A,x,y+1);
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
     int t;
     cin>>t;
     while(t--)
     {
         cin>>m>>n;
         int **A;
         A=new int* [m];
         for(int i=0;i<m;i++)
         {
            A[i]=new int [n];
             for(int j=0;j<n;j++)
             cin>>A[i][j];
         }
         int x,y;
         cin>>x>>y>>ne;
         p=A[x][y];
         fill(A,x,y);
         for(int i=0;i<m;i++)
         {
             for(int j=0;j<n;j++)
             cout<<A[i][j]<<" ";
         }
         cout<<"\n";
     }
     
	//code
	return 0;
}