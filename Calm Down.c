#include<stdio.h>
#include<math.h>
double PI = 2.0*acos(0.0) ;
int main()
{
    int t,count=1;
    scanf("%d", &t);
    while(t--)
    {
        double R,r,n;
        scanf("%lf %lf", &R, &n);
        n=PI/n;
        R=R*sin(n);
        n=1+sin(n);
        r=R/n;
        printf("Case %d: %.10lf\n", count, r);
        count++;
    }
    return 0;
}
