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
    cin.ignore();
    while(t--)
    {
        ll a[26]={}, b[26]={}, len, flag=0;
        string s;

        getline(cin, s);
        len=s.size();
        for(ll i=0; i<len; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]+=('a'-'A');
            if(s[i]!=' ')
                a[s[i]-'a']++;
        }

        getline(cin, s);
        len=s.size();
        for(ll i=0; i<len; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]+=('a'-'A');
            if(s[i]!=' ')
                b[s[i]-'a']++;
        }

        for(ll i=0; i<26; i++)
        {
            if(b[i]!=a[i])
            {
                flag=1;
                break;
            }
        }
        cout<<"Case "<<cc<<": ";
        cc++;
        if(flag)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
