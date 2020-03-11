#include<stdio.h>
#include<string.h>
int main()
{
    int t,count=1;
    scanf("%d", &t);
    char a[10],ch;
    scanf("%c", &ch);
    while(t--)
    {
        scanf("%s", a);
        int len,flag=0;
        len=strlen(a);
        for(int i=0,j=len-1; i<len/2; i++,j--)
        {
            if(a[i]!=a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            printf("Case %d: No\n", count);
        else
            printf("Case %d: Yes\n", count);
        count++;
    }
    return 0;
}
