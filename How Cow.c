#include<stdio.h>
int main()
{
    int T,count=0;
    scanf("%d", &T);
    while(T--)
    {
        count++;
        int x1,x2,y1,y2,x,y,M;
        scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &M);
        printf("Case %d:\n", count);
        while(M--)
        {
            scanf("%d %d", &x, &y);

            if((x>x1&&x<x2)&&(y>y1&&y<y2))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
