#include <stdio.h>
#include <stdlib.h>
int cmp(const void *p,const void *q)
{
    return *(int*)p-*(int*)q;
}
int main()
{
    int con[3],i,a,b,c,n;
    for(i=0; i<3; i++)
    {
        scanf("%d",&con[i]);
    }
    qsort(con,3,sizeof(int),cmp);

    a=con[0];
    b=con[1];
    c=con[2];

    if((c%a==0)&&(c%b==0))
    {
        n=c;
        printf("%d\n",c);
    }
    else
    {
        if(c%a!=0)
        {
            n=a*c;
            i=n;
        }
        else
        {
            n=c;
            i=n;
        }
        if(n%b==0)
        {
            printf("%d\n",n);
        }
        else
        {
            do
            {
                n=n+i;


            }
            while(n%b!=0);
            printf("%d\n",n);
        }
    }
return 0;
}
