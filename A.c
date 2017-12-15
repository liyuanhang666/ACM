#include<stdio.h>
#include<math.h>
int main()
{
    int a,j,k,i,flag=1;
    scanf("%d",&a);
    for(i=a-1;i>1;i--)
    {
        if(a%i==0)
        {
            for(j=2;j<sqrt(i);j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
return 0;
}
