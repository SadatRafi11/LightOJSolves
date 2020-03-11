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

int func(ll m)
{
    ll cc=0;
    while(m)
    {
        if(m&1)
            cc++;
        m=m>>1;
    }
    return cc;
}

int main()
{
    fast;
    ll n,t,cnt1,cnt2,tmp,c=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt1=func(n);
        ll i=1;
        while(1)
        {
            if(n&i)
            {
                tmp=n+i;
                break;
            }
            i=i<<1;
        }
        cnt2=func(tmp);

        for(ll i=0; i<(cnt1-cnt2); i++)
            tmp+=(1<<i);

        cout<<"Case "<<c<<": "<<tmp<<endl;
        c++;
    }
    return 0;
}
