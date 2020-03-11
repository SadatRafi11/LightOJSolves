#include<bits/stdc++.h>
using namespace std;

#define ll                  long long int
#define llu                 long long unsigned
#define ld                  long double
#define fast                ios_base::sync_with_stdio(0);cin.tie(0);
#define endl                "\n"
#define pb                  push_back
#define bp                  pop_back
#define pf                  push_front
#define fp                  pop_front
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(min(a,b),min(c,d))
#define max4(a,b,c,d)       max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
#define NUM                 1000000
#define                     PI 2*acos(0.0)

ll fact(ll n)
{
    if(!n)
        return 1;
    return n*fact(n-1);
}

int main()
{
    ll t, cc=1, f[21];
    for(ll i=0; i<21; i++)
        f[i]=fact(i);
    cin>>t;
    while(t--)
    {
        ll n, sum=0;
        vector<int> v;
        cin>>n;
        for(ll i=20; i>=0; i--)
        {
            if((sum+f[i])<=n)
            {
                v.pb(i);
                sum+=f[i];
            }
        }
        cout<<"Case "<<cc<<": ";
        if(sum==n)
        {
            ll len=v.size(), i;
            for(i=(len-1); i>0; i--)
                cout<<v[i]<<"!+";
            cout<<v[i]<<"!"<<endl;
        }
        else
            cout<<"impossible"<<endl;
        cc++;
    }
    return 0;
}
