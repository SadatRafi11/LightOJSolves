#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        double r;
        cin>>r;
        cout<<fixed<<setprecision(2);
        cout<<"Case "<<c<<": "<<((4-(2*(acos(0.0))))*(r*r))<<endl;
        c++;
    }
    return 0;
}
