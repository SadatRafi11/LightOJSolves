#include<stdio.h>
int main()
{
    int t,count=1;;
    scanf("%d", &t);
    while(t--)
    {
        int n,x=0;
        scanf("%d", &n);
        while(n)
        {
            if(n%2)
                x++;
            n=n/2;
        }
        if(x%2)
            printf("Case %d: odd\n", count);
        else
            printf("Case %d: even\n", count);
        count++;
    }
    return 0;
}
