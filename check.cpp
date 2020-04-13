/*
....................
....................
*/
#include<bits/stdc++.h>
#define ll long long int
#define here cout<<"here\n"
#define pb push_back
#define mp make_pair
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define pf printf
#define pfi(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define ff first
#define ss second
#define modipair pair<pair<ll,ll>,pair<ll,ll>>
using namespace std;

const ll mod = 998244353;

const int MAX = 100005;


ll gcd(ll a, ll b); 
  
ll power(ll x, ll y, ll m); 
  

ll modInverse(ll a, ll m) 
{ 
    ll g = gcd(a, m); 
    if (g != 1) 
        return 0;
    else
    { 
        return (ll)power(a, m-2, m); 
    } 
} 
  
ll power(ll x, ll y, ll p)  
{  
    ll res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
  
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 




modipair applyOp(modipair a, modipair b, char op){ 
    modipair val;
    ll A[4]={0},B[4]={0};
    A[0]=a.ff.ff,A[1]=a.ff.ss,A[2]=a.ss.ff,A[3]=a.ss.ss;
    B[0]=b.ff.ff,B[1]=b.ff.ss,B[2]=b.ss.ff,B[3]=b.ss.ss;
    int i,j;
    if(op=='|')
    {
       ll sum00=0,sum11=0,sum10=0;
       for(i=0;i<4;i++)
       {
       	 for(j=0;j<4;j++)
       	 {

       	 	if((j==1||i==1)||(i==2&&j==3)||(i==3&&j==2))
       	 	{
       	 		sum11+=A[i]*B[j];
       	 		sum11%=mod;
       	 	}
       	 	else if(j==0&&i==0)
       	 	{
       	 		sum00+=A[i]*B[j];
       	 		sum00%=mod;
       	 	}
       	 }
       }
       sum10+=A[2]*B[2];
       sum10%=mod;
       sum10+=A[0]*B[2];
       sum10%=mod;
       sum10+=A[2]*B[0];
       sum10%=mod;
       //sum10/=2;
       val=mp(mp(sum00%mod,sum11%mod),mp((sum10)%mod,(sum10)%mod));
    } 
    else if(op=='&')
    {
       ll sum00=0,sum11=0,sum10=0;
       for(i=0;i<4;i++)
       {
       	 for(j=0;j<4;j++)
       	 {

       	 	if(((j==0||i==0)||(i==2&&j==3)||(i==3&&j==2)))
       	 	{
       	 		sum00+=A[i]*B[j];
       	 		sum00%=mod;
       	 	}
       	 	else if(j==1&&i==1)
       	 	{
       	 		sum11+=A[i]*B[j];
       	 	    sum11%=mod;
       	 	}
       	 	

       	 }
       }
        sum10+=A[2]*B[2];
       sum10%=mod;
       sum10+=A[1]*B[2];
       sum10%=mod;
       sum10+=A[2]*B[1];
       sum10%=mod;
       val=mp(mp(sum00%mod,sum11%mod),mp((sum10)%mod,(sum10)%mod));
    }
    else if(op=='^')
    {
       ll sum=0;
       sum+=A[0]*B[0];
       sum%=mod;
       sum+=A[1]*B[1];
       sum%=mod;
       sum+=A[2]*B[2];
       sum%=mod;
       sum+=A[3]*B[3];
       sum%=mod;
       //sum/=4;
       val=mp(mp((sum)%mod,(sum)%mod),mp((sum)%mod,(sum)%mod));
    }

    return val;

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
    	ll cn=0;
    	ll i,j,k,l;
    	ll n=s.length();
    	stack<modipair>values;
    	//cout<<s<<endl;
    	for(i=0;i<n;i++)
    	{
    		if(s[i]=='#')
    			cn++;

    	}

    	//cout<<cn<<endl;


    	stack<char>ops;
    	string tokens=s;
        //ll f=0;
    	for(i = 0; i < tokens.length(); i++)
    	{ 
          	
        	if(tokens[i] == '(')
        	{ 
        	    ops.push(tokens[i]); 
        	} 
          
        	
        	else if((tokens[i]=='#'))
        	{ 
            	values.push(mp(mp(1,1),mp(1,1))); 
        	} 
          
        	
        	else if(tokens[i] == ')') 
        	{ 
         		while(!ops.empty() && ops.top() != '(') 
           		{  
                	modipair val2 = values.top(); 
                	values.pop(); 
                  
                	modipair val1 = values.top(); 
                	values.pop(); 
                  
                	char op = ops.top(); 
                	ops.pop(); 
                  
                	values.push(applyOp(val1, val2, op)); 
            	} 
              
            	if(!ops.empty()) 
               		ops.pop(); 
        	} 
          
        	else
        	{ 
            	
            	while(!ops.empty()&&ops.top()!='(' )
            	{ 
                	modipair val2 = values.top(); 
                	values.pop(); 
                  
                	modipair val1 = values.top(); 
                	values.pop(); 
                  
                	char op = ops.top(); 
                	ops.pop(); 
                  
                	values.push(applyOp(val1, val2, op)); 
            	} 
              
            	ops.push(tokens[i]); 
        	} 
    	} 
      
  
        modipair ans = values.top();
        j=power((ll)4,cn,mod);
        //cout<<j<<endl;
        //k=modInverse(j,mod);
        k=j;
        i=gcd(ans.ff.ff,j);
        ans.ff.ff/=i;
        k/=i;
        k=modInverse(k,mod);
        cout<<((ans.ff.ff*k)%mod)<<" ";

        //=j;
        //i=gcd(mod,j);
       // ans.ff.ss/=i;
        //k/=i;
        k=j;
        i=gcd(ans.ff.ss,j);
        ans.ff.ss/=i;
        k/=i;
        k=modInverse(k,mod);
        cout<<((ans.ff.ss*k)%mod)<<" ";


        //k=j;
        //i=gcd(mod,j);
        //ans.ss.ff/=i;
        //k/=i;
        k=j;
        i=gcd(ans.ss.ff,j);
        ans.ss.ff/=i;
        k/=i;
        k=modInverse(k,mod);
        cout<<((ans.ss.ff*k)%mod)<<" ";

        
        cout<<((ans.ss.ff*k)%mod)<<" ";
        cout<<endl;
        //i=100000000;
        //cout<<i*1000000<<endl;
       // cout<<modInverse(3,11)<<endl;
       // cout<<ans.ff.ff<< " "<<ans.ff.ss<<" "<<ans.ss.ff<<" "<<ans.ss.ss<<endl;

        //cout<<11%7<<endl;
    }
	
	return 0;
}