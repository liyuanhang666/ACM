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
                k++;  //k��ʾ����ɻ�õĽ����
                j+=k; //j��ʾ���������ʱ��Ҫ���������
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
