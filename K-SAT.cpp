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
#define mp                  make_pair
#define ms(a,b)             memset((a),(b),sizeof(a))
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(min(a,b),min(c,d))
#define max4(a,b,c,d)       max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
#define NUM                 1000000
#define PI		    2*acos(0.0)
#define maximum             (-1*INF)
const int INF = 1e5 + 10 ;

int main()
{
    ll t, cc=1;
    cin>>t;
    while(t--)
    {
        ll n, m, k;
        cin>>n>>m>>k;
        ll a[n][k];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<k; j++)
                cin>>a[i][j];
        }

        ll p, x;
        cin>>p;
        bool b[m+1]={false};
        for(ll i=0; i<p; i++)
        {
            cin>>x;
            b[x]=true;
        }

        bool yes=true;

        for(ll i=0; i<n; i++)
        {
            ll flag=0;
            for(ll j=0; j<k; j++)
            {
                if(a[i][j]>0 && b[a[i][j]]==true)
                {
                    flag=1;
                    break;
                }
                else if(a[i][j]<0 && b[-1*(a[i][j])]==false)
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                yes=false;
                break;
            }
        }

        cout<<"Case "<<cc<<": ";
        if(yes)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        cc++;
    }
    return 0;
}
