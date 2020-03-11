#include<stdio.h>
int main()
{
    long long int t,count=1;
    scanf("%lld", &t);
    while(t--)
    {
        long long int a,b,x,y;
        scanf("%lld %lld", &a, &b);
        y=(b/3)*2;
        if(b%3==2)
            y++;
        x=((a-1)/3)*2;
        if((a-1)%3==2)
            x++;
        printf("Case %lld: %lld\n", count, y-x);
        count++;
    }
    return 0;
}
