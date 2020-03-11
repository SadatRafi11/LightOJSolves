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

int main()
{
    ll t, cc=1;
    cin>>t;
    while(t--)
    {
        ld u, l, h, p, r, v;
        cin>>u>>l>>h>>p;
        r=((u-l)*p)/h;
        u=l+r;
        v=(PI*p*((u*u)+(u*l)+(l*l)))/3.0;
        cout<<fixed<<setprecision(6);
        cout<<"Case "<<cc<<": "<<v<<endl;
        cc++;
    }
    return 0;
}
