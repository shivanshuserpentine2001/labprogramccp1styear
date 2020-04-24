#include <stdio.h>
#include <stdlib.h>
int sum(int*,int*);
int subrac(int*,int *);
int multi(int *,int *);
float divis(float *,float *);
int main()
{
    int n1,n2;
    int w,n,m;
    float z;
    printf("enter values you want to perform the function for:");
    scanf("%d %d",&n1,&n2);

    m=sum(&n1,&n2);
    printf("after addition:%d\n",m);
    n=subrac(&n1,&n2);
    printf("after subraction:%d\n",n);
    w=multi(&n1,&n2);
    printf("after multiplication:%d\n",w);
    z=divis(&n1,&n2);
    printf("after division:%f",z);
}
int sum(int *p,int *q)
{
    int s;
    s=*p+*q;
 return s;
}
int subrac(int *d , int *e)
{ int sminus;
    sminus= *d-*e;
    return sminus;
}
int multi(int *a , int *b)
{
    int smul;
    smul=*a * *b;
    return smul;
}
float divis(float *g,float *h) //to get a float returned value declaring float type var is compulsory.
{float sdiv;
sdiv= *g/ *h;
return sdiv;




}
