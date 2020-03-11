#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define llu unsigned long long int
#define lf long double
#define endl "\n"
#define NUM 1000000

int main()
{
    ll t,cnt=1;
    cin>>t;
    getchar();
    while(t--)
    {
        cout<<"Case "<<cnt<<':'<<endl;
        cnt++;
        string a[105],s;
        a[0]="http://www.lightoj.com/";
        ll i=0;
        while(1)
        {
            cin>>s;
            if(s[0]=='V')
            {
                i++;
                cin>>a[i];
                cout<<a[i]<<endl;
                a[i+1][0]='\0';
            }
            else if(s[0]=='F')
            {
                if(a[i+1][0]=='\0')
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    i++;
                    cout<<a[i]<<endl;
                }
            }
            else if(s[0]=='B')
            {
                i--;
                if(i>=0)
                    cout<<a[i]<<endl;
                else
                {
                    cout<<"Ignored"<<endl;
                    i++;
                }
            }
            else if(s[0]=='Q')
            {
                break;
            }
        }
    }
    return 0;
}
