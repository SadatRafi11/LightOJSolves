#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t,count=1;
    scanf("%d", &t);
    while(t--)
    {
        int n,x,total=0;

        char a[100];
        char ch;
        printf("Case %d:\n", count);
        scanf("%d", &n);
        while(n--)
        {
            scanf("%s", a);
            if(a[0]=='d')
            {
                scanf("%d", &x);
                total=total+x;
            }
            if(a[0]=='r')
                printf("%d\n", total);
        }
        count++;
    }
    return 0;
}
