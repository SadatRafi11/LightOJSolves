#include<stdio.h>
int main()
{
    int t,count=1;
    scanf("%d", &t);
    while(t--)
    {
        int n,total=0;
        char ch;
        scanf("%c",&ch);
        scanf("%d", &n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]<0)
                a[i]=0;
            total=total+a[i];
        }
        printf("Case %d: %d\n", count, total);
        count++;
    }
    return 0;
}
