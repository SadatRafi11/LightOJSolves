#include<stdio.h>
int main()
{
    long long int t,count=1;
    scanf("%lld", &t);
    while(t--)
    {
        long long int n,m,k,total=0;
        scanf("%lld %lld", &n, &m);
        k=n/(2*m);
        total=k*m*m;
        printf("Case %lld: %lld\n", count, total);
        count++;
    }
    return 0;
}
