#include <stdio.h>
int main()
{
    int n,i,j,k,sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0; j=1; k=1;
        for(i=1;i<=n;i++){
            sum+=k;
            if(i==j){
                k++;  //k表示当天可获得的金币数
                j+=k; //j表示金币能增加时需要跨过的天数
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
