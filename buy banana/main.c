#include<stdio.h>
typedef struct
{
    int a;
    double m;
}mon;
int main()
{
    int n,i;
    double min,g;
    mon h[1005];
    scanf("%d",&n);
   // min=h[0].m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i].a);
        h[i].m=h[i].a*1.00/(h[i].a+1);
        printf("%.2lf\n",h[i].m);
    }
    min=h[0].m;
    for(i=0;i<n;i++)
    {
        if(h[i].m<min)
        {
            min=h[i].m;
        }
    }
    for(i=0;i<n;i++)
    {   g=h[i].m-min;
        printf("%.2lf\n",g);
    }
    return 0;
}
