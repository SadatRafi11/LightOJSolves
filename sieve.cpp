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

bool status[(1000000000>>1)+1];


int main() {

    fast;
    memset(status, false, sizeof(status));
    ll sq ,x ,m ,sum ,num;
    vector<int> p;
    p.pb(2);
    for(ll i=3, k=1; i<=1000000000; i+=2)
    {
        if(!status[i>>1])
        {
            p.pb(i);
            for(ll j=i*i; j<=1000000000; j=j+(i<<1))
                status[j>>1] = true;
        }
    }
    for(ll i=0; i<p.size(); i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    cin>>m;
    sq = int(sqrt(double(m)));
    vector<int> d;
    num=0;
    sum=0;
    for(ll i=0; p[i] <= (sq>>1); i++)
    {
        if(m%p[i] == 0)
        {
            while(m%p[i] == 0)
            {
                m /= p[i];
                d.pb(p[i]);
                sum += p[i];
            }
            num++;
        }
    }
    if(m>1)
    {
        d.pb(m);
        sum += m;
        num++;
    }
    cout<<num<<" "<<sum<<endl;
    for(ll i=0; i<d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
    return 0;

}

