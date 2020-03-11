#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,i,j,count=1;
    scanf("%lld", &t);

    while(t--)
    {
        long long int x;
        double n,y;
        scanf("%lf", &n);
        y=sqrt(n);
        y=ceil(y);
        x=(long long int)y;
        if(x%2)
        {
            if((n-(((x-1)*(x-1))+1))==((x*x)-n))
            {
                i=x;
                j=x;
            }
            else if((n-(((x-1)*(x-1)+1)))<((x*x)-n))
            {
                i=(n-(((x-1)*(x-1)+1)))+1;
                j=x;
            }
            else if((n-(((x-1)*(x-1)+1)))>((x*x)-n))
            {
                i=x;
                j=((x*x)-n)+1;
            }
        }
        else
        {
            if((n-(((x-1)*(x-1))+1))==((x*x)-n))
            {
                i=x;
                j=x;
            }
            else if((n-(((x-1)*(x-1)+1)))<((x*x)-n))
            {
                j=(n-(((x-1)*(x-1)+1)))+1;
                i=x;
            }
            else if((n-(((x-1)*(x-1)+1)))>((x*x)-n))
            {
                j=x;
                i=((x*x)-n)+1;
            }
        }
        printf("Case %lld: %lld %lld\n", count, j, i);
        count++;
    }
    return 0;
}
