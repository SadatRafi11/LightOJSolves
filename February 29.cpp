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
#define                     PI 2*acos(0.0)
#define maximum             (-1*INF)
const int INF = 1e5 + 10 ;

int to_num(string s)
{
    if(s=="January")
        return 1;
    if(s=="February")
        return 2;
    if(s=="March")
        return 3;
    if(s=="April")
        return 4;
    if(s=="May")
        return 5;
    if(s=="June")
        return 6;
    if(s=="July")
        return 7;
    if(s=="August")
        return 8;
    if(s=="September")
        return 9;
    if(s=="October")
        return 10;
    if(s=="November")
        return 11;
    if(s=="December")
        return 12;
}

bool is_LeapYear(ll y)
{
    return ((y%400==0) || (y%100 && y%4==0));
}

int main()
{
    ll t, cc=1;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        ll d1, d2, y1, y2, flag=0;
        char ch;
        cin.ignore();
        cin>>s1>>d1>>ch>>y1;
        cin.ignore();
        cin>>s2>>d2>>ch>>y2;

        ll c=0, m1=to_num(s1), m2=to_num(s2), t1=y1, t2=y2;

        c = (y2/4 - y2/100 + y2/400) - (y1/4 - y1/100 + y1/400);

        if(is_LeapYear(y1) && m1<=2)
            c++;
        if(is_LeapYear(y2))
        {
            if(m2<2)
                c--;
            else if(m2==2 && d2<29)
                c--;
        }

        cout<<"Case "<<cc<<": "<<c<<endl;
        cc++;
    }
    return 0;
}
