#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int num = 0;
    scanf("%d" , &a);

    while(a--){
        scanf("%d" , &num);
        printf("%.2f\n" , num/(double)(num+1)-0.5);
    }
    return 0;
}
