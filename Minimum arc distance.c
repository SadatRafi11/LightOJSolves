#include<stdio.h>
#include<math.h>

int main()
{
    int t,count=1;
    scanf("%d", &t);
    while(t--)
    {
        double Ox,Oy,Ax,Ay,Bx,By,r,d,rad;
        scanf("%lf %lf %lf %lf %lf %lf", &Ox, &Oy, &Ax, &Ay, &Bx, &By);
        r=sqrt(((Oy-Ay)*(Oy-Ay))+((Ox-Ax)*(Ox-Ax)));
        d=sqrt(((By-Ay)*(By-Ay))+((Bx-Ax)*(Bx-Ax)));
        d/=2;
        rad=asin(d/r);
        rad*=2;
        printf("Case %d: %.8lf\n", count, (rad*r));
        count++;
    }
    return 0;
}
