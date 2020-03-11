#include<stdio.h>
int main()
{
    long long int t,count=1;
    scanf("%lld", &t);
    while(t--)
    {
        long long int m,n,result;
        scanf("%lld %lld", &m, &n);
        if(m==1||n==1)
        {
            if(m==1&&n==1)
                result=1;
            else if(m==1)
                result=n;
            else
                result=m;
        }
        else if(m==2||n==2)
        {
            if(m==2&&n==2)
                result=4;
            else if(n!=2)
            {
                if(n%4==1)
                    result=((n/4)*4)+2;
                else if(n%4==0)
                    result=n;
                else
                    result=((n/4)+1)*4;
            }
            else if(m!=2)
            {
                if(m%4==1)
                    result=((m/4)*4)+2;
                else if(m%4==0)
                    result=m;
                else
                    result=((m/4)+1)*4;
            }
        }
        else
        {
            if((m*n)%2)
                result=((m*n)/2)+1;
            else
                result=(m*n)/2;
        }
        printf("Case %lld: %lld\n", count, result);
        count++;
    }
    return 0;
}
