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
        ld r1, r2, r3, x, y, z, s, a, b, c;
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        z=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
        x=acos(((c*c)+(b*b)-(a*a))/(2*c*b));
        y=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
        s=(a+b+c)/2;
        s=sqrt(s*(s-a)*(s-b)*(s-c));
        a=((r1*r1)/2)*y;
        b=((r2*r2)/2)*z;
        c=((r3*r3)/2)*x;
        cout<<fixed<<setprecision(6);
        cout<<"Case "<<cc<<": "<<s-a-b-c<<endl;
        cc++;
    }
    return 0;
}
