// SWAPPING INTERGER USING POINTER AND MAINLLY CALL BY REFERENCE
#include <stdio.h>
#include <stdlib.h>
void interchange(int *,int *);
int main()
{   int n1 ;
    int n2 ;
    int temp;

    printf("enter no 1(n1):");
    scanf("%d",&n1);
    printf("enter no 2(n2):");
    scanf("%d",&n2);
   interchange(&n1,&n2);}
void interchange( int *a , int *b)
 { int temp;
     temp=*a;
    *a=*b;
    *b=temp;
    printf("the given input was swapped in output");
    printf("\nn1:%d \nn2:%d",*a,*b);
    printf("\n*******************************\n");
    }
