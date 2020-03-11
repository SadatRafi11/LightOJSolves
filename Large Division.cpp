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
    ll cc=1, t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        string a;
        ll b, j=0, d=0;
        cin>>a>>b;
        ll len=a.size();
        if(b<0)
            b=b*(-1);
        if(a[0]=='-')
            j=1;
        for(; j<len; j++)
        {
            d=(d*10)+(a[j]-'0');
            d=d%b;
        }
        if(d)
            cout<<"Case "<<cc<<": not divisible"<<endl;
        else
            cout<<"Case "<<cc<<": divisible"<<endl;
        cc++;
    }
    return 0;
}
