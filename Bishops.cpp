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
        ll r1, c1, r2, c2, flag=0;
        cin>>r1>>c1>>r2>>c2;
        if((r1%2 && c1%2)||(r1%2==0 && c1%2==0))
        {
            if(!((r2%2 && c2%2)||(r2%2==0 && c2%2==0)))
                flag=1;
        }
        else
        {
            if((r2%2 && c2%2)||(r2%2==0 && c2%2==0))
                flag=1;
        }
        cout<<"Case "<<cc<<": ";
        cc++;
        if(flag)
            cout<<"impossible"<<endl;
        else
        {
            ll r=r1-r2 ,c=c1-c2;
            if(r<0)
                r*=-1;
            if(c<0)
                c*=-1;
            if(r==c)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
    return 0;
}
