#include<bits/stdc++.h>
using namespace std;

#define ll                  long long int
#define llu                 long long unsigned
#define ld                  long double
#define fast                ios_base::sync_with_stdio(0);cin.tie(0);
#define endl                "\n"
#define NUM     1000000
int main()
{
    ll t,cnt=1;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n];
        for(ll i=0; i<n; i++)
            cin>>a[i];
        getchar();
        while(m--)
        {
            char s;
            cin>>s;
            if(s=='S')
            {
                ll d;
                cin>>d;
                for(ll i=0; i<n; i++)
                    a[i]=a[i]+d;
            }
            else if(s=='M')
            {
                ll d;
                cin>>d;
                for(ll i=0; i<n; i++)
                    a[i]=a[i]*d;
            }
            else if(s=='D')
            {
                ll d;
                cin>>d;
                for(ll i=0; i<n; i++)
                    a[i]=a[i]/d;
            }
            else if(s=='P')
            {
                ll y,z,temp;
                cin>>y>>z;
                temp=a[y];
                a[y]=a[z];
                a[z]=temp;
            }
            else if(s=='R')
                reverse(a,a+n);
        }
        cout<<"Case "<<cnt<<':'<<endl;
        for(ll i=0; i<n-1; i++)
            cout<<a[i]<<' ';
        cout<<a[n-1]<<endl;
        cnt++;
    }
    return 0;
}
