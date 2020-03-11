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
        ld v1, v2, v3, a1, a2, t1, t2, d;
        cin>>v1>>v2>>v3>>a1>>a2;
        d=(v1*v1)/(2*a1);
        d+=((v2*v2)/(2*a2));
        t1=v1/a1;
        t2=v2/a2;
        cout<<fixed<<setprecision(10);
        cout<<"Case "<<cc<<": "<<d<<" ";
        if(t1>t2)
            cout<<t1*v3<<endl;
        else
            cout<<t2*v3<<endl;
        cc++;
    }
    return 0;
}
