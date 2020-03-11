#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,count=1;
    scanf("%lld", &t);
    while(t--)
    {
        long long int w,i=2,n,m,flag=0,x;
        scanf("%lld", &w);
        while(i<w)
        {
            if(w%2)
            {
                flag=2;
                break;
            }
            if(((w%i)==0)&&((w/i)%2))
            {
                n=w/i;
                m=i;
                flag=1;
                break;
            }
            i*=2;
        }
        if(flag==1)
            printf("Case %lld: %lld %lld\n", count, n, m);
        else if(flag==2)
            printf("Case %lld: Impossible\n", count);
        else
            printf("Case %lld: Impossible\n", count);
        count++;
    }
    return 0;
}
