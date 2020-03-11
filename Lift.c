#include<stdio.h>
int main()
{
    int n,a,b,time,count=0;
    scanf("%d", &n);
    while(n--)
    {
        count++;
        scanf("%d %d", &a, &b);
        if(b>=a)
            time=(b*4)+19;
        else
            time=((a-b)*4)+(a*4)+19;
        printf("Case %d: %d\n", count, time);
    }
    return 0;
}
