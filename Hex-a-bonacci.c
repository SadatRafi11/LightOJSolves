#include<stdio.h>
#include<string.h>
int ar[10001];
int flag[10001];
int fn( int n ) {
    if(n<6)
        return ar[n];
    if(flag[n]==1)
        return ar[n];
    ar[n]=((fn(n-1)%10000007) + (fn(n-2)%10000007) + (fn(n-3)%10000007) + (fn(n-4)%10000007) + (fn(n-5)%10000007) + (fn(n-6)%10000007))%10000007;
    flag[n]=1;
    return ar[n];
}
int main()
{
    int n, caseno=0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        memset(ar, 0, 10000*(sizeof(int)));
        memset(flag, 0, 10000*(sizeof(int)));
        scanf("%d %d %d %d %d %d %d", &ar[0], &ar[1], &ar[2], &ar[3], &ar[4], &ar[5], &n);
        printf("Case %d: %d\n", ++caseno, (fn(n)%10000007) );
    }
    return 0;
}
