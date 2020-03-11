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
#define pp                  pop_up
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(min(a,b),min(c,d))
#define max4(a,b,c,d)       max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
#define NUM                 1000000
#define PI                  2*acos(0.0)

int gcd(ll x, ll y)
{
    if(y==0)
        return x;
    else if(x%y==0)
        return y;
    else
        gcd(y,x%y);
}

int main() {

    /*stack<string>st;
    ll temp;
    string x;
    cin>>temp;
    cin.ignore();
    getline(cin,x);
    st.push(x);
    x=st.top();
    cout<<x<<endl;
    temp=st.size();
    cout<<temp<<endl;
    st.pop();
    temp=st.size();
    cout<<temp;*/


    /*deque<int> dq;
    ll temp1=4,temp2=5,x=5;
    while(x--) {
        dq.pf(temp1--);
        dq.pb(temp2++);
        cout<<dq[0]<<" "<<dq[dq.size()-1]<<endl;
    }*/



    /*queue<int> q;
    ll temp,x;
    cin>>temp>>x;
    while(x--) {
        q.push(temp--);
    }
    cout<<q.size()<<endl;
    while(!q.empty()) {
        cout<<q.front()<<endl;
        q.pop();
    }*/

    /*priority_queue<int> pq;
    ll temp,x;
    cin>>x;
    while(x--) {
        cin>>temp;
        pq.push(temp);
    }
    cout<<pq[0];*/
    /*while(!pq.empty()) {
        cout<<pq.top()<<endl;
        pq.pop();
    }*/

    /*unordered_multiset<int> s;
    ll temp;
    ll x=10;
    while(x--) {
        cin>>temp;
        s.insert(temp);
    }

    unordered_multiset<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++) {
        cout<<*it;
    }*/


    /*map< string, int > m;
    string goru;

    while(getline(cin,goru)) {
        if(goru=="moro") break;
        m[goru]++;
        cout<<goru<<" ase "<<m[goru]<<" ta!"<<endl;
    }*/
    ll a,n,temp;
    cin>>a>>n;
    if(a<n)
        temp=gcd(n,a);
    else
        temp=gcd(a,n);
    cout<<temp;













    return 0;

}
