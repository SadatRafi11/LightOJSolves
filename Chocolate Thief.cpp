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
        ll n, a, b, c, pv, mx=-1*(NUM), mn=NUM;
        string s, took, from;
        cin>>n;
        while(n--)
        {
            cin.ignore();
            cin>>s>>a>>b>>c;
            if(mx<(a*b*c))
            {
                mx=a*b*c;
                took=s;
            }
            if(mn>a*b*c)
            {
                mn=a*b*c;
                from=s;
            }
        }
        cout<<"Case "<<cc<<": ";
        if(mx!=mn)
            cout<<took<<" took chocolate from "<<from<<endl;
        else
            cout<<"no thief"<<endl;
        cc++;
    }
    return 0;
}
