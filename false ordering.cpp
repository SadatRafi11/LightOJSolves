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
    ll cc=0, x, t;
    vector< pair<int,int> > v;
    for(ll n=1; n<=1000; n++)
    {
        cc=0;
        for(ll i=1; i*i<=n; i++)
        {
            if((n%i==0)&&((n/i)!=(n/(n/i))))
                cc+=2;
            else if(n%i==0)
                cc++;
        }
     v.pb( make_pair(cc, n) );
    }
    sort( v.begin(), v.end() );
    ll a[1001];
    a[0]=1;
    ll temp, j;
    for(ll i=1; i<1000; i++)
    {
        j=i;
        while(1)
        {
            if(v[j].first==v[j+1].first)
                j++;
            else
            {
                ll z=i;
                for(ll k=j; k>=z; k--,i++)
                    a[i]=v[k].second;
                i--;
                break;
            }
        }
    }
    cin>>t;
    ll cnt=1;
    while(t--)
    {
        cin>>x;
        cout<<"Case "<<cnt<<": "<<a[x-1]<<endl;
        cnt++;
    }
    return 0;
}
