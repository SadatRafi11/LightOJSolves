#include<stdio.h>
#include<math.h>
int main()
{
    int T,count=0;
    scanf("%d", &T);
    while(T--)
    {
        count++;
        double a1,a2,b1,b2,c1,c2,d1,d2,area;
        scanf("%lf %lf %lf %lf %lf %lf", &a1, &a2, &b1, &b2, &c1, &c2);
        d1=c1-b1+a1;
        d2=c2-b2+a2;
        double a,b,c,s;
        a=((b2-a2)*(b2-a2))+((b1-a1)*(b1-a1));
        a=sqrt(a);
        b=((d2-b2)*(d2-b2))+((d1-b1)*(d1-b1));
        b=sqrt(b);
        c=((d2-a2)*(d2-a2))+((d1-a1)*(d1-a1));
        c=sqrt(c);
        s=a+b+c;
        s=s/2;
        area=s*(s-a)*(s-b)*(s-c);
        area=sqrt(area);
        area=area*2;
        printf("Case %d: %.0lf %.0lf %.0lf\n", count, d1, d2, area);
    }
    return 0;
}
