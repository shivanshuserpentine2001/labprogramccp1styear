#include <stdio.h>
#include <stdlib.h>

int main()
{   int n1 ,*ip;
    int n2, *dp;
    int temp;

    printf("enter no 1(n1):");
    scanf("%d",&n1);
    printf("enter no 2(n2):");
    scanf("%d",&n2);
    ip=&n1;
    dp=&n2;
    temp=ip;
    ip=dp;
    dp=temp;
    printf("\nn1:%d \nn2:%d",*ip,*dp);
    printf("\n*******************************\nthe given input was swapped in output");
    return 0;

}
