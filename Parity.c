#include<stdio.h>
void bin(int n,int *count1)
{
    if(!(n/2))
        return;
    else
    {
        if(n%2)
            (*count1)++;
        bin((n/2),count1);
    }
}
int main()
{
    int t,count=1;
    scanf("%d", &t);
    while(t--)
    {
        int n,x,count1=0;
        int *p;
        p=&count1;
        scanf("%d", &n);
        bin(n,p);
        x=count1+1;
        if(x%2)
            printf("%d Case %d: odd\n", x, count);
        else
            printf("%d Case %d: even\n", x, count);
        count++;
    }
    return 0;
}
