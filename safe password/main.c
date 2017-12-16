#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
typedef struct
{
    char word[80];
    int dig;
    int low;
    int upp;
    int ght;
    int sum;
} password;
int main()
{
    int n,i,j;
    password a[1000];
    freopen("nn.txt","r",stdin);
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",a[i].word);
        a[i].low=0;
        a[i].upp=0;
        a[i].dig=0;
        a[i].ght=0;
        for(j=0;a[i].word[j]!='\0';j++)
        {
            if(islower(a[i].word[j])!=0)
            {
                a[i].low=1;
            }
            if(isdigit(a[i].word[j])!=0)
            {
                a[i].dig=1;
            }
            if(isupper(a[i].word[j])!=0)
            {
                a[i].upp=1;
            }
            if(isupper(a[i].word[j])==0&&islower(a[i].word[j])==0&&isdigit(a[i].word[j])==0)
            {
                a[i].ght=1;
            }
        }
        a[i].sum=a[i].upp+a[i].low+a[i].ght+a[i].dig;
        if(strlen(a[i].word)<6||a[i].sum==1)
        {
           printf("Not Safe\n");
        }
        else if(a[i].sum==2)
        {
            printf("Medium Safe\n");
        }
        else
        {
            printf("Safe\n");
        }
    }

    return 0;
}
