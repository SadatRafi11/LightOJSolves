#include<stdio.h>
int main()
{
    int t,count=1;
    scanf("%d", &t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        if(((a*a)+(b*b))==(c*c))
            printf("Case %d: yes\n", count);
        else if(((a*a)+(c*c))==(b*b))
            printf("Case %d: yes\n", count);
        else if(((b*b)+(c*c))==(a*a))
            printf("Case %d: yes\n", count);
        else
            printf("Case %d: no\n", count);
        count++;
    }
    return 0;
}
