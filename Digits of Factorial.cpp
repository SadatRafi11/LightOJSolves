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

ld a[1000001];


int main()
{
    freopen("out.txt" , "w" , stdout);
    ld t, n, b, cc=1;
    cin>>t;
    a[0]=0;
    for(ll i=1; i<=1000000; i++)
    {
        a[i]=log(i)+a[i-1];
    }
    while(t--)
    {
        cin>>n>>b;
        if(n!=1)
            cout<<"Case "<<cc<<": "<<((ll)(a[(ll)n]/log(b)))+1<<endl;
        else
            cout<<"Case "<<cc<<": "<<0<<endl;
        cc++;
    }
    return 0;
}

