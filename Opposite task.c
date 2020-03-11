#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n;
        scanf("%d", &n);
        if(n<=10)
            printf("0 %d\n", n);
        else
            printf("%d 10\n", n-10);
    }
    return 0;
}
