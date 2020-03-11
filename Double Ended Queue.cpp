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
    ll t,n,m,tmp,cc=1;
    string s;
    cin>>t;
    while(t--)
    {
        deque<int> q;
        cout<<"Case "<<cc<<":"<<endl;
        cin>>n>>m;
        while(m--)
        {
            cin>>s;
            if(s[3]=='h')
            {
                cin>>tmp;
                if(q.size()==n)
                    cout<<"The queue is full"<<endl;
                else if(s[4]=='L')
                {
                    cout<<"Pushed in left: "<<tmp<<endl;
                    q.pf(tmp);
                }
                else
                {
                    cout<<"Pushed in right: "<<tmp<<endl;
                    q.pb(tmp);
                }
            }
            else
            {
                if(!q.size())
                    cout<<"The queue is empty"<<endl;
                else if(s[3]=='L')
                {
                    tmp=q[0];
                    cout<<"Popped from left: "<<tmp<<endl;
                    q.fp();
                }
                else
                {
                    tmp=q[q.size()-1];
                    cout<<"Popped from right: "<<tmp<<endl;
                    q.bp();
                }
            }
        }
        cc++;
    }
    return 0;
}
