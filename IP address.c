#include<stdio.h>
#include<string.h>
int main()
{
    int t,a[4],b[4],flag,count=1,i,n,k,len1,len2;
    char dec[50],bin[50];
    scanf("%d", &t);
    while(t--)
    {
        scanf(" %s %s", dec, bin);
        len1=strlen(dec);
        len2=strlen(bin);
        for(k=0; k<len1; k++)
        {
            if(dec[k]=='.')
                dec[k]=' ';
        }
        for(k=0; k<len2; k++)
        {
            if(bin[k]=='.')
                bin[k]=' ';
        }
        sscanf(dec,"%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
        sscanf(bin,"%d %d %d %d", &b[0], &b[1], &b[2], &b[3]);
        flag=0;
        for(i=0; i<4; i++)
        {
            n=a[i];
            int j=1,total=0,r;
            while(n)
            {
                r=n%2;
                total=total+(r*j);
                n=n/2;
                j=j*10;
            }
            if(total!=b[i]) flag=1;
        }
        if(flag)
            printf("Case %d: No\n", count);
        else
            printf("Case %d: Yes\n", count);
        count++;
    }
    return 0;
}
