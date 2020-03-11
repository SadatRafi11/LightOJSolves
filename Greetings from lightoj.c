#include<stdio.h>
int main()
{
    int t,count=1;
    scanf("%d", &t);
    while(t--)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", count, a+b);
        count++;
    }
    return 0;
}
